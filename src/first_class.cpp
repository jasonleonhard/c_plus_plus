// cd src; g++ first_class.cpp -o ../bin/first_class; first_class;

#include <iostream>
using namespace std;

class Rectangle{
  private:
    int width, height;

  public:
    void set_height_and_width (int,int);

    int area(){
      return width * height;
    }
};

void Rectangle::set_height_and_width(int x, int y){
  width = x;
  height = y;
}

int main(){
  Rectangle rect;
  rect.set_height_and_width(6,7);
  cout << "area = " << rect.area() << endl;
  return 0;
}
