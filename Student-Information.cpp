#include<iostream>
using namespace std;
class student{
    public:
    string name;
    string branch;
    string subject;
    float result;
};
int main(){
    cout<<"student 1"<<endl;
    student s1;
    s1.name="Ishan Danech";
    s1.branch="Mechanical";
    s1.subject="C++";
    s1.result=8.6;
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.result<<endl;
        cout<<"student 2"<<endl;
        student s2;
        s2.name="Atharv Jamali";
        s2.branch="ENTC";
        s2.subject="Mathematics";
        s2.result=7.0;
        cout<<s2.name<<endl;  
        cout<<s2.branch<<endl;
        cout<<s2.subject<<endl;
        cout<<s2.result<<endl;
         return 0;
}
