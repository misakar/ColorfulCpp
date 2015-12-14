/*Draw.h -- colorful font*/
# ifndef MUXI
# define MUXI

# include <cstdlib>
# include <iostream>


class Draw
{
    /*
     * ASNI escape code package
     *
     * color
     * ANSI escape code     color
     * \033[31m\033[0m       red
     * \033[32m\033[0m       green
     * \033[33m\033[0m       yellow
     * \033[34m\033[0m       blue
     * \033[35m\033[0m       magenta
     * \033[36m\033[0m       cyan
     *
     * behave
     * ANSI escape code
     * \033[0m -- close all attr
     * \033[1m -- set highnight
     * \033[4m -- set underline
     * \033[5m -- shinne & shinne
     * \033[7m -- echo
     * \033[8m -- blanking
     * \033[30m-\33[37m set front-end color
     * \033[40m-\33[47m set background color
     * \033[nA -- cursor up n
     * \033[nB -- cursor down n
     * \033[nC -- cursor right n
     * \033[nD -- cursor left n
     * \033[y;xH -- set position(x, y)
     * \033[2J -- clear screen
     * \033[K -- clear cursor to endline
     * \034[s -- save cursor position
     * \033[u -- undo the cursor position
     * \033[?25l -- show the cursor
     * \033[?25h -- hide the cursor
     */

private:

public:

};


# endif
