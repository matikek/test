#include <iostream>
#include <windows.h>

using namespace std;

string imie, imiee;
int liczba;

int main()
{
        cout<<"Podaj Imie: ";
            cin>> imie;
        cout<<"Podaj calkowita liczbe calkowita: ";
            cin>> liczba;
        for (int i=1; i<=liczba; i++)
        {
            Sleep(20);
            cout<< i<<". "<<imie<<endl;
        }

    return 0;
}
