/*
 * @Author: Alexander Tengborg 
 * @Date: 2018-08-08 22:06:52 
 * @Last Modified by: Alexander Tengborg
 * @Last Modified time: 2018-08-09 01:43:11
 */

#include <windows.h>

int CALLBACK
WinMain(HINSTANCE hInstance,
        HINSTANCE hPrevInstance,
        LPSTR     lpCmdLine,
        int       nCmdShow)
{
    MessageBox(NULL, "This is Handmade Hero.", "Handmade Hero", 
               MB_OK|MB_ICONINFORMATION);

    return (0);
}
