#include <iostream>
#include <string>
#include <vector>
class Student {

  static const std ::string Institute;
  std ::string Name, E_mail;
  float GPA, CGPA;
  std::vector<int> Marks; // 5 Subjects...

public:
  Student(std ::string Sname, std ::string email, std ::vector<int> mark,
          float cgpa)
      : Name(Sname), E_mail(email), GPA(0.0), CGPA(0.0), Marks(mark) {
    CGPA = cgpa;
  }
  //
  // User Functions
  void calculateGPA() {
    float totalmarks = 0;
    for (int i = 0; i <= Marks.size(); i++) {
      totalmarks = totalmarks + Marks[i];
    }
    // now for GPA
    GPA = (totalmarks / 500) * 4;

    // Now CGPA
    CGPA = (CGPA + GPA) / 2;
  }

  // Display Function...
  void Display() const {
    std ::cout << "\nInstitution Name : " << Institute << "\n";
    std ::cout << "Student Name : " << Name << "\n";
    std ::cout << "E-Mail : " << E_mail << "\n";
    std ::cout << "Student Marks Board \n";
    for (int i = 0; i < Marks.size(); i++) {
      std ::cout << "\t Subject " << i + 1 << "  " << Marks[i] << "\n";
    }
    std ::cout << "\nStudent GPA : " << GPA << " & CPGA : " << CGPA << "\n";
  }
};

const std ::string Student ::Institute = "Edwardes College Peshawar";

int main() {
  Student s[3] = {
      Student("Hamid", "abc@gmail.com", {77, 95, 83, 64, 69}, 3.22),
      Student("Änees", "fu4ykhan@gmail.com", {88, 74, 96, 63, 71}, 3.34),
      Student("Mala", "malala@gmail.com", {50, 56, 64, 69, 73}, 2.97)};
  s[0].calculateGPA();
  s[1].calculateGPA();
  s[2].calculateGPA();

  s[0].Display();
  s[1].Display();
  s[2].Display();
  return 0;
}
