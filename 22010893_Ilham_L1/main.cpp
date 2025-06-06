#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int contact;
    string email;
};
int main () {
Student student[5];
    for (int i=0; i<5; i++){
        cout << "Student Id: "; cin >> student[i].id;
        cout << "Student Name: "; cin >> student[i].name;
        cout << "Student Contact: "; cin >> student[i].contact;
        cout << "Student Email: "; cin >> student[i].email;
    }
    for (int i=0; i<5; i++){
        cout << "\n***************************************";
        cout << "\nStudent"<< i+1;
        cout << "\nID: "<< student[i].id;
        cout << "\nName: "<< student[i].name;
        cout << "\nContact: "<< student[i].contact;
        cout << "\nEmail: "<< student[i].email;
    }
    
}