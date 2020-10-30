//-- Dato de entrada: l1,l2,l3 (double)
//-- Dato de salida : area, perimetros
//-------------------------------------

#include "CTriangulo.h"

int main()
{
  tnumero lado1, lado2, lado3;
  do {
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;
  }while( !((lado1+lado2>lado3) and (lado2 + lado3 >lado1) and (lado3 + lado1 > lado2)));

  CTriangulo T; //-- constructor por defecto

  T.setl1(lado1);
  T.setl2(lado2);
  T.setl3(lado3);
  cout << "El area es : " << T.area() << "\n";
  cout << "El perimetro es : " << T.perimetro() << "\n";

  cout <<"\nCremos otro triangulo con valores fijos en los lados " << "\n";
  CTriangulo T2(30,40,50);
  cout << "El area es : " << T2.area() << "\n";
  cout << "El perimetro es : " << T2.perimetro() << "\n";

  cout << "\nPedimos datos para el triangulo 3\n";
  do {
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;
  }while( !((lado1+lado2>lado3) and (lado2 + lado3 >lado1) and (lado3 + lado1 > lado2)));

  CTriangulo T3(lado1, lado2, lado3);
  cout << "El area es : " << T3.area() << "\n";
  cout << "El perimetro es : " << T3.perimetro() << "\n";

  //--- vamos a crear un objeto dinámico!!!

  CTriangulo   *pObjeto= nullptr;

  cout << "\nPedimos datos para el triangulo 4\n";
  do {
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;
  }while( !((lado1+lado2>lado3) and (lado2 + lado3 >lado1) and (lado3 + lado1 > lado2)));

  pObjeto = new CTriangulo(lado1,lado2,lado3);
  cout << "El area es : " << pObjeto->area() << "\n";
  cout << "El perimetro es : " <<  (*pObjeto).perimetro() << "\n";
  delete pObjeto;
  pObjeto = nullptr;
  return 0;
}
