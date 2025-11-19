#include <iostream>
using namespace std;

class Base {
  int bbase = 1;

public:
  virtual void display(void) { std ::cout << "\n\nBase \n"; }
};

class Derived : public Base {
  int derived = 2;

public:
  void display(void) { std ::cout << "\n\nDerived \n"; }
};

int main() {
  Base *ptr_obj1;
  cout << " Base ptr : " << &ptr_obj1;

  Derived obj2;
  cout << "\n\n Derived ptr : " << &obj2;

  //---

  ptr_obj1->display();

  ptr_obj1 = &obj2;

  cout << "\n\nptr * finding " << ptr_obj1 << "\nptr & finding " << &ptr_obj1;

  // ============------------------------------=================

  ptr_obj1->display();
  return 0;
}
