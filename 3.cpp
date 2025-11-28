#include <iostream> 
using namespace std; 
int main() 
{ 
    int x=3; //инициализация переменной
    cout<< sizeof (int)<<endl; //выводит размер типа int в байтах
    cout<< sizeof (x*10)<<endl; //выводит размер результата выражения
    cout<< sizeof (x*0.1)<<endl; //выводит размер результата выражения
   return 0; //завершение результата 
}
