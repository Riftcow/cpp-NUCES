#include <iostream>
#include <string>

class Employee {
  //         attributes
protected:
  std ::string empName;

public:
  Employee(std ::string eName) : empName(eName) {}

  //         Modules...
  void setterEmp(std ::string setName) { empName = setName; }

  std ::string getEmp(void) { return empName; }

  //      calculation
  virtual float calcSalary() = 0;
};

class hourlyEmployee : public Employee {
  //         attributes
  float hourlyRate, hourlyWork;

public:
  hourlyEmployee(float hRate, float hWork, std ::string hourlyeName)
      : Employee(hourlyeName), hourlyRate(hRate), hourlyWork(hWork) {}

  // Modules
  float calcSalary(void) override {
    float hourlySalary;
    hourlySalary = hourlyRate * hourlyWork;

    return hourlySalary;
  }
};

class salarizedEmployee : public Employee {

  //         attributes
  float annualSalary;

public:
  salarizedEmployee(float aSalary, std ::string annualeName)
      : Employee(annualeName), annualSalary(aSalary) {}

  //         Modules
  float calcSalary(void) override {
    float yearlySalary;
    yearlySalary = annualSalary / 12;

    return yearlySalary;
  }
};

int main() {

  std ::string employeName;
  float hourlyR, hourlyW, a_salary;
  int selctor = 0;
  //         input from user...
  std::cout << "\tselect Category \n Press 1  Hourly Employee Salary \n Press "
               "2 for Salarized Employee Salary \n";
  std ::cin >> selctor;
  std::cout << std::endl;

  if (selctor == 1) {
    std ::cout << "Enter your Name \n";
    std ::getline(std::cin, employeName);
    std ::cin.ignore();
    std ::cout << "Hourly Worked ";
    std ::cin >> hourlyW;
    std ::cout << "\n Hourly Rate \n";
    std ::cin >> hourlyR;

    hourlyEmployee Hemp1(hourlyR, hourlyW, employeName);

    std ::cout << "Hourly Employee Details :\n Hourly Emplyee Name : "
               << Hemp1.getEmp() << "\n Salary : " << Hemp1.calcSalary();

  } else if (selctor == 2) {

    std::cout << "Enter  Employee Name\n";
    std ::getline(std::cin, employeName);
    std ::cin.ignore();
    std::cout << "\nEnter Annual Salary \n";
    std ::cin >> a_salary;

    salarizedEmployee emp1(a_salary, employeName);

    std ::cout << "Salarized Employee Details :\n Salarized Employee Name : "
               << emp1.getEmp() << "\n Annual Salary : " << emp1.calcSalary();
  } else {
    std ::cout << "Invalid Key\n";
  }

  return 0;
}
