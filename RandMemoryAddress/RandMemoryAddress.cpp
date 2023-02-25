
#include <fstream>


int main()
{
    const char* part = "C:\\Users\\alexz\\C++ prog\\Random\\Random\\temp.txt";
    std::ofstream file(part);

    short int *ptr = new short int;
    int rand = int(ptr);

    if (rand < 0) rand *= -1;
    file << rand << '\n';
    file.close();

    delete ptr;

    return 0;
}


