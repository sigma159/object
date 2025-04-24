#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) {
        a = abs(a);
        b = abs(b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void reduce() {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int den) {
        if (den == 0) {
            cout << "Знаменник не може бути нулем! Встановлено 1." << endl;
            numerator = 0;
            denominator = 1;
        }
        else {
            numerator = num;
            denominator = den;
            reduce();
        }
    }
    
    void input() {
        cout << "Введіть чисельник: ";
        cin >> numerator;
        cout << "Введіть знаменник: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Знаменник не може бути нулем. Встановлено 1 за замовчуванням." << endl;
            denominator = 1;
        }
        reduce();
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction add(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction subtract(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction multiply(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction divide(const Fraction& other) const {
        if (other.numerator == 0) {
            cout << "Ділення на нуль! Повертається дріб 0/1." << endl;
            return Fraction(0, 1);
        }
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Fraction(num, den);
    }
};

int main() {
    Fraction a, b;
    cout << "Введення першого дробу:\n";
    a.input();

    cout << "Введення другого дробу:\n";
    b.input();

    cout << "\nСума: ";
    a.add(b).display();

    cout << "Різниця: ";
    a.subtract(b).display();

    cout << "Добуток: ";
    a.multiply(b).display();

    cout << "Ділення: ";
    a.divide(b).display();

    return 0;
}
