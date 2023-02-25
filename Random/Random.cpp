
#include <windows.h>
#include <fstream>
#include <ctime>
#include <iostream>

#pragma warning(disable: 28159)

static const char* partToAppl = "C:\\Users\\alexz\\C++ prog\\Random\\x64\\Debug\\RandMemoryAddress.exe";
static const char* partToFile = "C:\\Users\\alexz\\C++ prog\\Random\\Random\\temp.txt";

int MemoryValue() 
{
    static int last;
    static int rand = last;
    
    WinExec(partToAppl, 0);

    std::ifstream file(partToFile);
    
    while (!file.good() || rand == last)
    {
        std::cout << "it\n";
        file = std::ifstream(partToFile);
        if (file.good())
            file >> rand;
    }

    last = rand;
    return rand;
}


int Rand()
{
    int rand = MemoryValue();
    
    rand /= 10000;
    rand %= 10000;

    if (rand < 1000)
        rand += 997;
    
    rand += time(0) % 10;
    if (rand > 9999) rand /= 10;
    
    return rand;
}


int main()
{
    for(int i = 0; i < 1; ++ i)
        std::cout << Rand()%100 << '\n';

    return 0;
}

