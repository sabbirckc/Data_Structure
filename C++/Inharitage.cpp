#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person()
    {

    }
    void display1()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
    }




};
class Student : public Person{
public:
    int id;
    student()
    {

    }
    void display2()
    {
        display1();
        cout<<"ID :"<<id<<endl;
    }


};
int main(){
    Person pobj;
    pobj.name= "Shohid";
    pobj.age= 25;
    pobj.display1();

    Student sobj;
    sobj.name= "Nahid";
    sobj.age= 24;
    sobj.id=981;
    sobj.display2();



}
