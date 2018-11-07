#include <iostream>
#include <windows.h>
using namespace std;

int populacja=1;
int godzin=0;

int main()
{
    while (populacja<=1000000000)
    {
        Sleep(250);
        godzin++;
        populacja=populacja*2;
        cout<<"Populacja wynosi: "<<populacja<<endl;
    }
    return 0;
}
