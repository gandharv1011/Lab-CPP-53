#include<iostream>
#include<string>
using namespace std;
class student 
{
    private:
    string name;
    int RollNo;
    float marks;
    public:
    void inputDetails()
    {
        cout<<"Enter Student Name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll Number:";
        cin>>RollNo;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void displayDetails()const{
        cout<<"\n---Student Details---\n";
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo:"<<RollNo<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    student s1,s2,s3;
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();
    return 0; 
}