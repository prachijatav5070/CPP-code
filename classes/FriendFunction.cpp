
/**  RULE -  1 with the help of friend function we can acesss the private member in out of the class.
2 friend fuction ko declare class k andr krte hai ur define class k bahar karte hain.
3 friend function ko declare krte hai kisi class k andr to parameter pass class k naam se krte hai **/


#include<iostream>
using namespace std;

class student2;
class student1
{
  int marks=69;
  friend void cmp (student1, student2);
};

class student2
{
  int marks=60;
  friend void cmp (student1, student2);
};
void cmp(student1 s1, student2 s2)
{
    if(s1.marks > s2.marks)
    {
        cout<<"student1 has highest marks="<<s1.marks;
    }
    else{
       cout<<"student2 has highest marks="<<s2.marks;
    }
}
 int main()
 {
     student1 obj1;
     student2 obj2;
     cmp(obj1,obj2);
 }
