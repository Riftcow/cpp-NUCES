#include <iostream>
#include <string>

class Employee {

  std ::string empName;
  int empNumber;

public:
  Employee(std ::string Name, int eNumber)
      : empNumber(eNumber), empName(Name) {}

  //         Modules...

  virtual void setData(void) {
    std ::cout << "\nEnter Employee Name :  ";
    std ::getline(std::cin, empName);
    std ::cin.ignore();
    std ::cout << "\n Enter Employee Number :  ";
    std ::cin >> empNumber;
  }
  virtual void getData(void) {
    std ::cout << "\nEmployee Name : " << empName;
    std::cout << "\nEmployee Number : " << empNumber;
  }
};

class Manager : public Employee {
  char Title[2];
  double clubDues;

public:
  Manager(std ::string manaName, int manaNumber)
      : Employee(manaName, manaNumber), Title(), clubDues(0.0) {}

  //         Modules...

  void setData(void) override {
    Employee::setData();
    std ::cout << "\nEnter your Titile :  ";
    std::cin >> Title;
    std ::cout << "\n Enter Club Dues :  ";
    std ::cin >> clubDues;
  }
  void getData(void) override {

    Employee::getData();
    std ::cout << "\nManager  Title : " << Title;
    std::cout << "\n Manager lub Dues : " << clubDues;
  }
};

class Scientist : public Employee {
  int Publication;

public:
  Scientist(std ::string sciName, int sciNumber)
      : Employee(sciName, sciNumber), Publication(0) {}

  //         Modules

  void setData(void) override {
    Employee::setData();

    std ::cout << "\nEnter Your Publications  :  ";
    std ::cin >> Publication;
    std ::cout << "\n";
  }

  void getData(void) override {

    Employee::getData();
    std ::cout << "\nPublications  : " << Publication;
  }
};

class Programmer : public Employee {
  double progSalary;
  std::string expertise;

public:
  Programmer(std::string progName, int progNumber)
      : Employee(progName, progNumber), progSalary(0.0), expertise("--") {}

  //         Modules

  void setData(void) {
    Employee::setData();
    std ::cout << "\n Programmer Expertise :  ";
    std ::getline(std::cin, expertise);
    std ::cout << "\n Programmer Salary :  ";
    std ::cin >> progSalary;
    std ::cout << "\n";
  }
  void getData(void) {
    Employee::getData();
    std ::cout << "\n Programmer Expert Level : " << expertise;
    std::cout << "\n Programmer Salary : " << progSalary;
  }
};

int main() {
  //---------------------
  Manager mana("Abdullah", 17200);

  Scientist sci("Akash", 6);

  Programmer pro("Anees", 27316);

  mana.setData();
  sci.setData();
  pro.setData();

  // getdata...
  mana.getData();
  sci.getData();
  pro.getData();
  return 0;
}
