#include <iostream>
#include "myclass.h"

using namespace std;




int main () {
  cout << "HelloWorld!" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
