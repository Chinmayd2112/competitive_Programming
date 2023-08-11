#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int b1, b2, num1, num2;
    cin >> b1 >> num1 >> b2 >> num2;
    
    int decimal1 = 0, decimal2 = 0;
    int temp1 = num1, temp2 = num2;
    int digit, power = 0;
    
    // converting num1 from base1 to decimal
    while (temp1 > 0) {
        digit = temp1 % 10;
        decimal1 += digit * pow(b1, power);
        temp1 /= 10;
        power++;
    }
    
    power = 0;
    
    // converting num2 from base2 to decimal
    while (temp2 > 0) {
        digit = temp2 % 10;
        decimal2 += digit * pow(b2, power);
        temp2 /= 10;
        power++;
    }
    
    // summing the two numbers in decimal
    int sum = decimal1 + decimal2;
    cout << sum << endl;
    
    return 0;
}