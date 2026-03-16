#include<iostream>
#include<cstring>
using namespace std;

class Student {
public:
int Roll_no;
char Name[10];

Student(int Roll_no, const char Name[]){

this->Roll_no=Roll_no;
strcpy(this->Name,Name);
cout<<"name : "<<this->Name<<endl<<"Roll_no. :"<<this->Roll_no<<endl;
}

Student(){
    cout<<"hii i am default constructor !"<<endl;
}

Student(Student &obj){
    
    Roll_no= obj.Roll_no;
     strcpy(Name , obj.Name);
    cout<<"      hii copy constructor !"<<endl;
}
};
int main(){
    Student s1(21 ,"Sangeeta");
    Student s2(s1);
    cout<<"name : "<<s2.Name<<endl;
    cout<<"Roll_no. :"<<s2.Roll_no<<endl;

}