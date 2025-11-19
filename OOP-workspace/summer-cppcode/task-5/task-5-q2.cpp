#include <iostream>

class SavingAccount {
  float savingBalance;
  static float annualinterestRate;

public:
  SavingAccount(float bal) : savingBalance(0) { savingBalance = bal; }

  //		Member functions...
  void calculatemonthlyInterest() {
    float monthlyInterest = (savingBalance * annualinterestRate) / 12;
    savingBalance = savingBalance + monthlyInterest;
  }

  //         modifiable Interestrate
  static void modifyInterestRate(float newRates) {
    annualinterestRate = newRates;
  }
  //		Saver Balance check
  void Display() const {
    std ::cout << "Balance = " << savingBalance << std ::endl;
  }
};
float SavingAccount::annualinterestRate = 0.03;

int main() {
  SavingAccount saver1(2000.00), saver2(3000.00);
  saver1.calculatemonthlyInterest();
  saver1.Display();

  saver2.calculatemonthlyInterest();
  saver2.Display();

  // modifyInterestRate output
  std ::cout << "\n\nnext month interest by 1% increase...\n";
  saver1.modifyInterestRate(0.04);
  saver2.modifyInterestRate(0.04);

  saver1.calculatemonthlyInterest();
  saver2.calculatemonthlyInterest();

  saver1.Display();
  saver2.Display();
  return 0;
}
