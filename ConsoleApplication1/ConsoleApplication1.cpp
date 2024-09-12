#include <iostream> 
#include <string> 

using namespace std;

int main()
{
    int a1 = 9;
    int b1 = 50;
    int c1 = a1 + b1;
    int c2 = a1 - b1;
    int c3 = a1 * b1;
    int c4 = a1 / b1;
    int c5 = a1 % b1;

    if (a1 > b1)
    {
        int a1 = 60;
        int b1 = 25;
        int c1 = a1 + b1;
        cout << "summa a1 + b1 = " << c1 << endl;
    }

    if (a1 < b1)
    {
        int a1 = 60;
        int b1 = 25;
        int c1 = a1 - b1;
        cout << " a1 - b1 = " << c1 << endl;
    }

    if (true)
    {
        int a1 = 60;
        int b1 = 25;
        int c1 = a1 + b1;
        cout << "summa a1 + b1 = " << c1 << endl;
    }

    // cout << "a1 = " << a1 << endl; 
     //cout << "b1 = " << b1 << endl; 
     //cout <<"summa a1 + b1 = " << c1 << endl << 
     //"vichitanie a1 - b1 =" << c2 << endl << 
     //"umnojenie a1 * b1 = " << c3 << endl << 
     //"delenie a1 / b1 =" << c4 <<endl<< 
     //"ostatok a1 % b1 = " << c5 << endl; 
}
