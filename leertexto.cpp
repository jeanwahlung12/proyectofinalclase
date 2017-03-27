#include <iostream>
#include <fstream>
using namespace std;

/*int main() {
   char cadena[128];
   ifstream fe("streams.cpp");

   while(!fe.eof()) {
      fe >> cadena;
      cout << cadena << endl;
   }
   fe.close();

   return 0;
}*/



class Pareja {
public:
    double a, b;

    // constructor parametrizado
    Pareja(const double a,const double b)
    {
        this->a = a;
        this->b = b;
    }
};

// Sobrecarga del operador +
Pareja& operator +(const Pareja &p1,const Pareja &p2)
{
  return *(new Pareja(p1.a + p2.a, p1.b + p2.b) );
}

int main()
{
    Pareja A(50, 75 );
    Pareja B(150, 175 );
    Pareja C = A + B;

    cout << "A = " << A.a << ',' << A.b << "\n";
    cout << "B = " << B.a << ',' << B.b << "\n";
    cout << "C = " << C.a << ',' << C.b << "\n";

    return 0;
}

