#include<iostream>
using namespace std;

class table
//static me funciton ko memory pehle hi mil jaati hai desing time me 
{
    public:static void show(int a)
        {
            for(int i = 1; i <= 10; i++)
            {
                cout << a << " * " << i << " = " << a * i << "\n";
            }
        }
};

int main()
{
    int a;
    cout << "Enter any number to generate its multiplication table is =\n";
    cin >> a;
    table::show(a);
}
