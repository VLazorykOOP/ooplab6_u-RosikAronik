#include <iostream>
#include <string>

using namespace std;



    class Parent {
    protected:
        string name;
        int age;

    public:
        Parent(const string& name, int age) : name(name), age(age) {}
        virtual ~Parent() {}

        virtual void display() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        friend istream& operator>>(istream& is, Parent& parent) {
            cout << "Enter name: ";
            is >> parent.name;
            cout << "Enter age: ";
            is >> parent.age;
            return is;
        }

        friend ostream& operator<<(ostream& os, const Parent& parent) {
            os << "Name: " << parent.name << endl;
            os << "Age: " << parent.age << endl;
            return os;
        }
    };


    class Student {
    protected:
        string name;
        int age;
        string university;

    public:
        Student(const string& name, int age, const string& university) : name(name), age(age), university(university) {}
        virtual ~Student() {}

        virtual void display() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "University: " << university << endl;
        }

        friend istream& operator>>(istream& is, Student& student) {
            cout << "Enter name: ";
            is >> student.name;
            cout << "Enter age: ";
            is >> student.age;
            cout << "Enter university: ";
            is >> student.university;
            return is;
        }

        friend ostream& operator<<(ostream& os, const Student& student) {
            os << "Name: " << student.name << endl;
            os << "Age: " << student.age << endl;
            os << "University: " << student.university << endl;
            return os;
        }
    };


    class StudentParent : public Parent, public Student {
    public:
        StudentParent(const string& name, int age, const string& university)
            : Parent(name, age), Student(name, age, university) {}

        void display() const override {
            cout << "--- Student-Parent Information ---" << endl;
            Parent::display();
            Student::display();
        }
    };

    void task3() {
        Parent parent("Vitaliy Andronik", 40);
        cout << parent << endl;

        Student student("Rosik Aronik", 19, "University");
        cout << student << endl;

        StudentParent studentParent("Geger Peterson", 35, "College");
        studentParent.display();


    }
   