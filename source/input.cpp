#include <iostream>
#include <vector>

#include <nds.h>

#include "include/input.hpp"

void Input::handle_input()
{
    scanKeys();
    touchRead(&touchPos);
    keys = keysDown();
}

bool Input::get_button_pressed(Input::buttons button_value)
{
    if (keys & int(button_value))
    {return true;}
    else {return false;}
}

std::vector<int> Input::get_touch_position()
{
    std::vector<int> vector_pos;

    vector_pos.emplace_back(touchPos.px);
    vector_pos.emplace_back(touchPos.py);

    return vector_pos;
}