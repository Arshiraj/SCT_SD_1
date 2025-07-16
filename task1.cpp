#include <iostream>
using namespace std;

int main() {
    double temp, celsius, fahrenheit, kelvin;
    int unit;

    cout << "Simple Temperature Converter\n";
    cout << "-----------------------------\n";
    cout << "Select the input unit:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "Enter your choice (1-3): ";
    cin >> unit;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (unit == 1) {
        celsius = temp;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        kelvin = celsius + 273.15;
    }
    else if (unit == 2) {
        fahrenheit = temp;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        kelvin = celsius + 273.15;
    }
    else if (unit == 3) {
        kelvin = temp;
        celsius = kelvin - 273.15;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
    }
    else {
        cout << "Invalid choice. Please run the program again.\n";
        return 0;
    }

    cout << "\nConverted Temperatures:\n";
    cout << "Celsius: " << celsius << " C\n";
    cout << "Fahrenheit: " << fahrenheit << " F\n";
    cout << "Kelvin: " << kelvin << " K\n";

    return 0;
}
