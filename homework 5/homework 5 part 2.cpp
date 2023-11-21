#include <iostream>
#include <cmath>

using namespace std;

class PowerCalculator {
  private:
    double a, b;     // Private variables to store two numbers
    double power;    // Private variable to store the result of the power calculation

  public:
    // getter function to input two numbers
    void input() {
      cin >> a >> b;
    }

    // setter function to calculate the power of 'a' raised to the 'b'
    void calculatePower() {
      power = pow(a, b);
    }

    // getter function to retrieve the calculated power
    double getPower() {
      return power;
    }
};

int main() {
  PowerCalculator calculator;

  while (true) {
    cout << "Input two numbers: " << endl;
    calculator.input();
    calculator.calculatePower();
    cout << endl << "The result is: " << calculator.getPower() << endl;
  }

  return 0;
}