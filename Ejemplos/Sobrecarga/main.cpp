#include <iostream>
#include <ostream>
#include <istream>
using namespace std;

class Complex {
  friend Complex operator+ (Complex const & c1, Complex const & c2);

  friend Complex operator- (Complex const & c1, Complex const & c2);

  friend Complex operator* (Complex const & c1, Complex const & c2);
  friend Complex operator/(Complex const & c1, Complex const & c2);
  //friend Complex operator%(Complex  & c1, Complex  & c2);

  friend bool  operator== (Complex const & c1, Complex  const  & c2);
  friend  bool operator >(Complex const & c1, Complex const & c2);

  friend std::ostream & operator << (std::ostream & os, Complex c);
  friend istream & operator >> (istream & is, Complex  & c);


  public:
  Complex(): r{0}, i{0} {};
  Complex (float r, float i) : r{r}, i{i} {}

  private:
  float r, i;
};

//OPeradores aritmeticos

Complex operator+ (Complex const & c1, Complex const & c2) {
  Complex result {c1.r + c2.r, c1.i + c2.i};
  return result;
}

Complex operator- (Complex const & c1, Complex const & c2) {
  Complex result {c1.r - c2.r, c1.i - c2.i};
  return result;
}

Complex operator* (Complex const & c1, Complex const & c2) {
  Complex result {c1.r * c2.r -c1.i * c2.i, c1.r * c2.i + c1.i * c2.r};
  return result;
}
Complex operator/(Complex const & c1, Complex const & c2){
    Complex result {c1.r / c2.r -c1.i / c2.i, c1.r / c2.i + c1.i / c2.r};
    return result;
}
//Complex operator%(Complex  & c1, Complex  & c2){
    //Complex result {c1.r % c2.r - c1.i / c2.r, c1.r / c2.i + c1.i / c2.r};
    //return result;
//}

//Operadores logicos
 bool  operator== (Complex  const & c1, Complex   const & c2){
    return (c1.r == c2.r && c1.i == c2.i);

}

 bool operator >(Complex  const & c1, Complex   const & c2){
     return (c1.r > c2.r && c1.i > c2.i);
 }


//OPeradores de flujo
ostream & operator << (ostream  & os, Complex  c) {  //Mostrar
  os << c.r << "+" << c.i << "*i";
  return os;
}

istream & operator >> (istream & is, Complex  & c){ //Introducir
    is >> c.r;
    is >> c.i;
    return is;
}


int main() {
    Complex a;
    Complex b;

    cout << "Introduzca el complejo: ";
    cin >> a ;

    cout << "Introduzca el complejo: ";
    cin >> b ;


    Complex c = a + b;
    Complex d = a - b;

   if(a == b){
       cout << "SOn iguales";
   }else{
       cout << "SOn diferentes";
   }







    cout << c << "\n";
    cout << d << "\n";


}
