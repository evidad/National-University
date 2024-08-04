#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Date {
    public:
        int day, month, year;

        Date(int m, int d, int y) : day(d), month(m), year(y) {}

        bool operator==(const Date& other) const {
            return day == other.day && month == other.month && year == other.year;
        }
};

class Appointment {
    protected:
        string description;
        Date date;

    public:
        Appointment(const string& desc, const Date& d) : description(desc), date(d) {}

        virtual bool occurs_on(int month, int day, int year) const = 0;
        virtual void print() const {
            cout << description << " on " << date.month << "/" << date.day << "/" << date.year << endl;
        }

        virtual ~Appointment() = default;
};

class Day : public Appointment {
    public:
        Day(const string& desc, const Date& d) : Appointment(desc, d) {}

        bool occurs_on(int month, int day, int year) const override {
            return date.year == year && date.month == month && date.day == day;
        }
};

class Monthly : public Appointment {
    public:
        Monthly(const string& desc, const Date& d) : Appointment(desc, d) {}

        bool occurs_on(int month, int day, int year) const override {
            return date.day == day && date.year == year;
        }
};

int main() {
    vector<unique_ptr<Appointment>> appointments;

    appointments.push_back(make_unique<Day>("See the dentist", Date(8, 15, 2024)));
    appointments.push_back(make_unique<Monthly>("Pay bills", Date(8, 15, 2024)));
    appointments.push_back(make_unique<Day>("Meeting with client", Date(8, 20, 2024)));
    appointments.push_back(make_unique<Monthly>("Gym membership renewal", Date(8, 5, 2024)));

    int month, day, year;
    cout << "Enter a date (month day year): ";
    cin >> month >> day >> year;

    cout << "Appointments on " << month << "/" << day << "/" << year << ":" << endl;
    for (const auto& appointment : appointments) {
        if (appointment->occurs_on(month, day, year)) {
            appointment->print();
        }
    }

    return 0;
}
