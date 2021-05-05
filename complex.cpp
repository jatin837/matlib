#include <iostream>
class Complex {
  private:
    int real, imag;
  public:
    Complex(int r = 0, int i = 0) {
      real = r; 
      imag = i;
    }

    Complex operator + (Complex const &second) {
      Complex result;
      result.real = real + second.real;
      result.imag = imag + second.imag;
      return result;
    }
    void print() {
      std::cout<<real<< " + i" << imag << std::endl;
    }
};
