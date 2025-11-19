#include <iostream>
using namespace std;

class ClockType {
  int Hours, Minutes, Seconds;

public:
  ClockType() : Hours(0), Minutes(0), Seconds(0) { normalizeTime(); }
  //            Modules...
  // Time Checking...

  void normalizeTime() {
    if (Seconds >= 60) {
      Minutes = Minutes + (Seconds / 60);
      Seconds = Seconds % 60;
    }
    if (Minutes >= 60) {

      Hours = Hours + (Minutes / 60);
      Minutes = Minutes % 60;
    }
    if (Hours >= 24) {

      Hours = Hours % 24;
    }
  }

  //         Overloading...
};

int main() {
  //

  return 0;
}
