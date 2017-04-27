/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 20:55:02 by mikim             #+#    #+#             */
/*   Updated: 2017/04/03 20:55:03 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_alloc_error(int error)
{
	if (error == 0 || error == -1)
	{
		ft_putendl_fd("ALLOCATION FAILED", 2);
		exit(0);
	}
}

void	ft_map_error(int error)
{
	if (error == 0 || error == -1)
	{
		ft_putendl_fd("INVALID MAP", 2);
		exit(0);
	}
}

void	ft_error(int error)
{
	if (error == 0 || error == -1)
	{
		ft_putendl_fd("ERROR", 2);
		exit(0);
	}
}

void	ft_usage(void)
{
	ft_putendl("usage: ./fdf <MAP_FILE> [-h height] [-w width]");
	ft_putendl("-w [600 - 1920]	specify window width");
	ft_putendl("                default: 1280");
	ft_putendl("-h [600 - 1280]	specify window height");
	ft_putendl("                defalut: 1024");
	ft_putendl("                \"./fdf --help\" for help");
	exit(0);
}

void	ft_guide(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 10, 0, 0xFFFFDF, "[+, -] zoom");
	mlx_string_put(e->mlx, e->win, 10, 15, 0xFFFFDF, "[W, S] rotate by X");
	mlx_string_put(e->mlx, e->win, 10, 30, 0xFFFFDF, "[A, D] rotate by Y");
	mlx_string_put(e->mlx, e->win, 10, 45, 0xFFFFDF, "[Q, E] altitude");
	mlx_string_put(e->mlx, e->win, 10, 60, 0xFFFFDF, "[ARROW] move");
	mlx_string_put(e->mlx, e->win, 10, 75, 0xFFFFDF, "[1, 2, 3, 4] color");
	mlx_string_put(e->mlx, e->win, 10, 90, 0xFFFFDF, "[ESC] exit");
}
