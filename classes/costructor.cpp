
/// constructor
#include <iostream>
using namespace std;
 class student ///default constructor it dose not have any parameter
 {
     public:student() //implicit calling automatically call
     {
         cout<<"constructor activated\n";
     }
 };

 class login ///parameter constructor have parameter 
 {
     int code=1001;
     int pwd=2001;
     public:login (int c,int p)
     {
         if(c==code && p==pwd)
         {
             cout<<"welcome\n";
         }
         else
         {
             cout<<"incorect pwd\n";
         }
     }
 };
 int main()
 {
     int code,pwd;

     cout<<"enter code\n";
     cin>>code;
     cout<<"enter pwd\n";
     cin>>pwd;
 /** constructor overloading = if a class having more then one constructor so that
  first parameter input run then default jo b **/ 
     login obj (code,pwd);
     student p;

 }
