#include <iostream>
#include <cmath>
using namespace std;

int decimalkeOctal(int desimal);
int main()
{
   int desimal;
    cout << "  -------------------------------------------------------\n";
    cout << "      Program C++ Konversi Bilangan Decimal Ke Oktal \n";
    cout << "                         Muhamad Rizal\n";
    cout << "  -------------------------------------------------------\n";
  cout << "  Masukkan Bilangan Desimal : ";
   cin >> desimal;
   cout <<"  "<< desimal << " Dalam Desimal, Maka " << decimalkeOctal(desimal) << " Dalam Oktal";
   return 0;
}
int decimalkeOctal(int desimal)
{
    int rem, i = 1, octalNumber = 0;
    while (desimal != 0)
    {
        rem = desimal % 8;
        desimal /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
