#include<iostream>
using namespace std;

class Student{
  
    private:
    int marks;
      public:
char name[10];

int getmarks(){
    return marks;
}
void setmarks(Student s1){
    cout<<"Set your marks "<<endl;
    cin>>marks;

}

    
};

int main(){
    Student s1;
      s1.setmarks(s1);
    cout<<" marks :  "<<s1.getmarks();
   // cin>>s1.marks;
    // cout<<"Enter student name: "<<endl;
    // cin>>s1.name;
    cout<<endl;
    //cout<<s1.marks;
    //cout<<s1.name;




    return 0;
}