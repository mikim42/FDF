# Fdf

__Installation:__

* `git clone https://github.com/mikim42/FDF.git`
* `make`
* `./fdf <MAP_FILE>`

**Usage:**
* `./fdf <MAP_FILE> [-w width] [-h height] [--help]`

**Options:**
* `-w` [`window_width`] loads with defined window width.
* `-h` [`window_height`]  loads with defined window height.
* `--help`  display help text.

**Example:**
* `./fdf maps/julia.fdf -w 1280 -h 1024`

**Keys:**
* &#8593; &#8592; &#8595; &#8594;: move
* `+` `-`: zoom
* `1, 2, 3, 4`: change color
* `Q` `E`: change maximum terrain elevation
* `W` `S`: rotate by X
* `A` `D`: rotate by Y
* `ESC`: exit
