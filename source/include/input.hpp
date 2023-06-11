#define SIMPLE_DS_INPUT
#ifdef SIMPLE_DS_INPUT

#include <iostream>
#include <vector>

#include <nds.h>

class Input
{
    public:

    enum struct buttons
    {
        // the libnds button codes //

        A = 1,
        B = 2,
        X = 1024,
        Y = 2048,

        UP = 64,
        DOWN = 128,
        LEFT = 32,
        RIGHT = 16,

        L = 512,
        R = 256,

        START = 8,
        SELECT = 4,

        TOUCH = 4096,

        LID_CHANGE = 8192,
    };

    int keys;
    touchPosition touchPos;

    void handle_input(); // update input variables each frame

    bool get_button_pressed(buttons button_value); // returns true and false for which buttons have been pressed

    std::vector<int> get_touch_position(); // returns the x and y position of touches on the touch
};

#endif