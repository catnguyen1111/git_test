#include<iostream>
#include<math.h>
#include<cstring>
#include<fstream>
using namespace std;
typedef struct Listperson{
    string name;
    int old;
    string classroom;
    int STT;
}Listperson;
void show(Listperson *Listperson){
    cout << "Name: " <<Listperson->name << endl;
    cout << "Old: " <<Listperson->old << endl;
    cout << "Classroom: " <<Listperson->classroom << endl;
    cout << "STT: " <<Listperson->STT << endl;
}

int main(){
    Listperson person1, person3;
    person1.name = "Nguyen Van Cat";
    person1.old = 22;
    person1.classroom = "17DCD1A";
    person1.STT = 1711543621;
    show(&person1);
    person3.name = "Nguyen Van vang";
    person3.old = 22;
    person3.classroom = "17DCD1A";
    person3.STT = 1711543621;
    show(&person3);
   
    
    

}