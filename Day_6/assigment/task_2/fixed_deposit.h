#pragma once
#include "account.h"

class FD_Account : public Account
{
private:
  static float int_rate;
  float tenure;

public:
  FD_Account(string name, float balance) : Account(name, balance)
  {
    cout << "\n Select your tenure eg.: 1, 3, 5 years : ";
    cin >> tenure;

    this->tenure = tenure;
  }

  void displayAccInfo()
  {
    Account::displayAccInfo();
    cout << "\n int_rate: " << int_rate;
    cout << "\n Principle: " << balance;
    cout << "\n FD Tenure: " << tenure;
  }

  float caluculate_returns()
  {

    float maturity_amt = (int_rate * balance * tenure);

    return maturity_amt;
  }

  void fd_announcement()
  {
    cout << "Dont brake your FD before maturity; otherwise charges will be applied";
  }
};

float FD_Account::int_rate = 0.08;
