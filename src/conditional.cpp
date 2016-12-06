// cd src; g++ conditional.cpp -o ../bin/conditional; conditional;

#include <iostream>
using namespace std;

int main(){

  int a, b, c;

  a = 1;
  b = 2;
  c = a + b;

  if (c == (a+b)){
    cout << a + b + c << endl;
  }

}
