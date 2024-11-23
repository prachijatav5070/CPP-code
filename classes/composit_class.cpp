/* Composite class - it contain the object of previous class*/
#include<iostream>
using namespace std;

class hacker
{
    public:void virus()
    {
       cout<<"your system got hacked\n";
    };
};
class user
{    hacker h;
    public:void reward()
    {
        cout<<"u win 20000 rs in a lottery system\n";
        h.virus();
    };
};
int main()
{
    user cast;
    cast.reward();
}
