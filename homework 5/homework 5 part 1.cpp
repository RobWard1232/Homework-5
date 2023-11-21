#include <iostream>

using namespace std;

class AverageCalculator {
  private:
    double a, b, c, d, e;  // Private variables to store 5 numbers
    double num;           // Private variable to store the average

  public:
    // Function to input 5 numbers
    void inputNumbers() {
        cin >> a >> b >> c >> d >> e;
    }

    // Function to calculate the average of the 5 numbers
    void calculateAverage() {
      num = (a + b + c + d + e) / 5;
    }

    // Function to retrieve the calculated average
    double getAverage() {
      return num;
    }
};

int main() {
  AverageCalculator calculator;

  while (true) {
    cout << "Enter 5 numbers: " << endl;
    calculator.inputNumbers();
    calculator.calculateAverage();
    cout << endl << "The average is: " << calculator.getAverage() << endl << endl;
  }
}