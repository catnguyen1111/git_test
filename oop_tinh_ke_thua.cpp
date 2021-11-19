#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class person
{
    string firstname;
    string lastname;
    string id;

public:
    person();
    person(string id);
    person(string id, string firstname, string lastname);
    void setperson(string id, string firstname, string lastname);
    string getid();
    string getfirstname();
    string getlastname();
    string getfullname();
    void show();
    void openfile(string namefile);
    void savedata(string comment, string data);
};
person ::person()
{
    firstname = " ";
    lastname = " ";
    id = " ";
}
person::person(string id)
{
    person();
    this->id = id;
}
person::person(string id, string firstname, string lastname)
{
    person();
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
}
void person::setperson(string id, string firstname, string lastname)
{
    person();
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
}
string person::getid()
{
    return id;
}
string person::getfirstname()
{
    return firstname;
}
string person::getlastname()
{
    return lastname;
}
string person::getfullname()
{
    return this->firstname + " " + this->lastname;
}

void person::show()
{
    cout << " ID: " << this->id << endl;
    cout << " First name: " << this->firstname << endl;
    cout << " Last name: " << this->lastname << endl;
    cout << " Full name: " << this->firstname + " " + this->lastname << endl;
}
void person::openfile(string namefile)
{
    ofstream Myfile(namefile);
}
void person::savedata(string comment, string data)
{
    ofstream Myfile;
    Myfile << comment, data;
}
class Student : public person
{
    string classroom;
    int age;

public:
    Student(string id, string firstname, string lastname, string classroom, int age);
    string getclassroom();
    int getage();
    void showInfo();
};

Student::Student(string id, string firstname, string lastname, string classroom, int age) : person(id, firstname, lastname)
{
    this->classroom = classroom;
    this->age = age;
}
void Student::showInfo()
{
    cout << " ID: " << getid() << endl;
    cout << " First name: " << getfirstname() << endl;
    cout << " Last name: " << getlastname() << endl;
    cout << " Full name: " << getfirstname() + " " + getlastname() << endl;
    cout << " Classroom: " << this->classroom << endl;
    cout << " Age: " << this->age << endl;
}
string Student::getclassroom()
{
    return this->classroom;
}
int Student::getage()
{
    return this->age;
}

int main()
{
    ofstream Myfile("filesave.txt");
    person person("1711543621", "cat", "nguyen");
    Student Student("1711543621", "cat", "nguyen", "17DCD1A", 22);
    Student.showInfo();
    // ghi data id vào filesave
    Myfile << " ID: " << person.getid() << endl;
    Myfile << " First name: " << person.getfirstname() << endl;
    Myfile << " Last name: " << person.getlastname() << endl;
    Myfile << " Full name: " << person.getfullname() << endl;
    Myfile << " Classroom: " << Student.getclassroom() << endl;
    Myfile << " Age: " << Student.getage() << endl;
    Myfile.close();
}