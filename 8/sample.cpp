#include <iostream>

using namespace std;

int main ()
{
   int  var = 20;   // значение переменной 20
   int  *ip;        // указатель на переменную 

   ip = &var;       // положим адрес переменно в указатель

   cout << "Value of var variable: ";
   cout << var << endl;

   // адрес переменной
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // возьмем значение переменной, через указатель
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}