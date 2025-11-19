#include <iostream>

struct st_Time {
  int hours, minutes, seconds, cal, temp_sec;
};

int main() {
  st_Time time_Converter;
  std ::cout << "Enter the time to convert into seconds.\nHours : ";
  std ::cin >> time_Converter.hours;
  std ::cout << "\nMinutes : ";
  std ::cin >> time_Converter.minutes;
  std ::cout << "\nSeconds : ";
  std ::cin >> time_Converter.seconds;

  //  calculation logic
  time_Converter.cal = time_Converter.hours * 60;
  time_Converter.cal = (time_Converter.cal + time_Converter.minutes) * 60;
  time_Converter.temp_sec = (time_Converter.cal + time_Converter.seconds);

  //  result
  std ::cout << "\n\nTime conversion of = " << time_Converter.hours << " : "
             << time_Converter.minutes << " " << time_Converter.seconds
             << " is  total Seconds = " << time_Converter.temp_sec << "\n";
  return 0;
}
