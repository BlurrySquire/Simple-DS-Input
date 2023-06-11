# Simple-DS-Input
Simple DS Input is a simple input library created in c++ for the DS.

## Usage Examples
Make sure you have the library installed and added to path before proceeding or add the path to your Makefile.

### Print Touch Position
```cpp
#include <nds.h>
#include <SimpleDS-Input.h>

Input input; //  create an object for 'Input' class

int main(void)
{
	PrintConsole bottomScreen;
	
	videoSetModeSub(MODE_0_2D);

	vramSetBankC(VRAM_C_SUB_BG);

	consoleInit(&bottomScreen, 3,BgType_Text4bpp, BgSize_T_256x256, 31, 0, false, true);

    consoleSelect(&topScreen);

    while (true)
    {
        input.handle_input();

        iprintf(input.get_touch_position());

        if (input.get_button_pressed(Input::buttons::START))
        {break;}
    }

    return 0;
}
```