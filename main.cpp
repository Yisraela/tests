#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream tekst;
    bool ile = false;
    string plik = "plik.txt";
    tekst.open (plik.c_str(), ios::in);
    if (tekst.good()==false)
        {
        cout << "nie znaleziono pliku"<< endl;
        exit(0);
        }
    string szukane;
    cout << "jakiego tekstu szukamy?" << endl;
    cin >> szukane;
    string wiersz;
    while( getline( tekst, wiersz ) )
    {
        size_t znalezione = wiersz.find ( szukane);
        if (znalezione != string::npos)
        {
         cout << wiersz << endl;
         ile = true;
        }
    }
    if (ile == false)
        cout << "brak wyrazu w pliku"<< endl;
    getchar();getchar();
    return 0;
}
