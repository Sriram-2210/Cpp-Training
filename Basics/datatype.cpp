#include <iostream>
#include<limits.h>
using namespace std;
  
int main() 
{
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Char Min value:" << CHAR_MIN << " bytes" <<endl;
    cout << "Char Max value:" << CHAR_MAX << " bytes" <<endl;

    cout << "Size of int : " << sizeof(int) <<  "bytes" << endl;
    cout << "Size of signed int:" << sizeof(signed int) << " bytes" << endl;
    cout << "Size of unsigned int:" << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of short int:" << sizeof(short int) << " bytes" << endl;

    cout << "Size of long : " << sizeof(long) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
      
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;

    cout << "Size of Wide char:" << sizeof(wchar_t) << " bytes" <<endl;
      
    return 0;
}

// long int and int have identical sizes 