// cd src; g++ for_loop.cpp -o ../bin/for_loop; for_loop;

#include <iostream>
using namespace std;

int main(){

  // countup 10 to 19
  // starting at _, until _, do _
  for( int i = 10; i < 20; i++ ){
    cout << "i = " << i << endl;
  }

  cout << endl;

  // countdown 10 to 1
  for( int i = 10; i > 0; i-- ){
    cout << "i = " << i << endl;
  }

  return 0;
}
