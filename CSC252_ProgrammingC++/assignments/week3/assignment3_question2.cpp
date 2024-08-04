#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Person {
protected:
    string name;
    string phone;
    string email;

public:
    Person(const string& name, const string& phone, const string& email)
        : name(name), phone(phone), email(email) {}

    virtual string toString() const {
        return "Person named " + name + " has phone number " + phone + " and can be reached at " + email;
    }

    virtual ~Person() = default;
};

class Student : public Person {
private:
    string year;

public:
    Student(const string& name, const string& phone, const string& email, const string& year)
        : Person(name, phone, email), year(year) {}

    string toString() const override {
        return Person::toString() + " is in the " + year + " year";
    }
};

class Employee : public Person {
protected:
    double salary;

public:
    Employee(const string& name, const string& phone, const string& email, double salary)
        : Person(name, phone, email), salary(salary) {}

    string toString() const override {
        return Person::toString() + " earns " + to_string(salary) + " annually";
    }
};

class Faculty : public Employee {
private:
    string title;

public:
    Faculty(const string& name, const string& phone, const string& email, double salary, const string& title)
        : Employee(name, phone, email, salary), title(title) {}

    string toString() const override {
        return Employee::toString() + " is a/an " + title;
    }
};

class Staff : public Employee {
private:
    string role;

public:
    Staff(const string& name, const string& phone, const string& email, double salary, const string& role)
        : Employee(name, phone, email, salary), role(role) {}

    string toString() const override {
        return Employee::toString() + " handles " + role;
    }
};

int main() {
    vector<unique_ptr<Person>> people;

    people.push_back(make_unique<Person>("Susan", "800-555-1212", "susan@quirkymail.com"));
    people.push_back(make_unique<Student>("Jerry", "123-456-7890", "jerjer@nat.edu", "sophomore"));
    people.push_back(make_unique<Employee>("Larry", "333-444-5555", "larry@threestooges.org", 123456.0));
    people.push_back(make_unique<Faculty>("Linda", "987-654-3210", "lindalou@whoknew.edu", 150000.0, "adjunt professor"));
    people.push_back(make_unique<Staff>("Jane", "567-123-6565", "jane@whizkid.com", 100000.0, "registration"));

    for (const auto& person : people) {
        cout << person->toString() << endl;
        cout << endl;
    }
    
    return 0;
}
