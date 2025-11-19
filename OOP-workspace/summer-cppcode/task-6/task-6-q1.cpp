#include <iostream>
#include <string>
//    Base Class...
class Employee {
  std ::string employeeName;
  //    float empSalary;

public:
  Employee(std ::string name) : employeeName(name) {}

  //   Member Functions...

  //         Getter Functions...
  std ::string getName() const { return employeeName; }
  //    float getSalary() { return empSalary; }

  //         setter functions...
  void setempName(std ::string name) { employeeName = name; }
  //       void setempSalary(float empsal) { empSalary = empsal; }

  // Calculation...
  virtual float calcSalary(void) = 0;
};

// Derived Class
//-01
class HourlyEmployee : public Employee {
  float hourlyRate, hourlyWork;

public:
  HourlyEmployee(std ::string name, float hRate, float hWork)
      : Employee(name), hourlyRate(hRate), hourlyWork(hWork) {}

  // member functions...

  float calcSalary() override { return (hourlyRate * hourlyWork); }
};
//-02
class SalariedEmployee : public Employee {
  float annualSalary;

public:
  SalariedEmployee(std ::string name, float aSalary)
      : Employee(name), annualSalary(aSalary) {}

  //         Member functions...
  float calcSalary() override { return (annualSalary / 12); }
};

int main() {

  //         Data input
  HourlyEmployee *ptr_H_obj1;

  return 0;
}
