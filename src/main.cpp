#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    string working_dir = "C:\\work\\*";
    WIN32_FIND_DATA ffd;
    HANDLE hFind = FindFirstFile(work_dir.c_str(), &ffd);
    if(hFind == INVALID_HANDLE_VALUE)
        return -1;
    bool finished = false;
    while(!finished)
    {
        cout << ffd.cFileName << endl;
        if (!FindNextFile(hFind, &ffd))
            finished = true;
    }
    return 0;
}
