#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    void input() {
        cout << "ПІБ: ";
        getline(cin, fullName);
        cout << "Дата народження: ";
        getline(cin, birthDate);
        cout << "Телефон: ";
        getline(cin, phoneNumber);
        cout << "Місто: ";
        getline(cin, city);
        cout << "Країна: ";
        getline(cin, country);
        cout << "Навчальний заклад: ";
        getline(cin, university);
        cout << "Місто навчального закладу: ";
        getline(cin, universityCity);
        cout << "Країна навчального закладу: ";
        getline(cin, universityCountry);
        cout << "Номер групи: ";
        getline(cin, groupNumber);
    }

    void print() const {
        cout << "\n--- Інформація про студента ---\n";
        cout << "ПІБ: " << fullName << "\n";
        cout << "Дата народження: " << birthDate << "\n";
        cout << "Телефон: " << phoneNumber << "\n";
        cout << "Місто: " << city << "\n";
        cout << "Країна: " << country << "\n";
        cout << "Навчальний заклад: " << university << "\n";
        cout << "Місто навчального закладу: " << universityCity << "\n";
        cout << "Країна навчального закладу: " << universityCountry << "\n";
        cout << "Номер групи: " << groupNumber << "\n";
    }

    string getFullName() const { return fullName; }
    string getPhoneNumber() const { return phoneNumber; }
    string getUniversity() const { return university; }
};

