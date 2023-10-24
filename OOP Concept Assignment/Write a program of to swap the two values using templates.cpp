#include <iostream>
using namespace std;
template <typename T>
void swap(T& a, T& b) 
{
  T temp = a;
  a = b;
  b = temp;
}
int main() {
  int a = 1;
  int b = 2;

  cout << "Before swap: a = " << a << ", b = " << b << endl;

  swap(a, b);

  cout << "After swap: a = " << a << ", b = " << b << endl;

  return 0;
}

