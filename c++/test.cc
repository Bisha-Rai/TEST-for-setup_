#include<iostream>
using namespace std;
class mul
{
    private:
        int i;
        float f;
    public:
       mul()
       {
            i=0;
            f=0;
       } 
       mul(int integer)
       {
            i=integer;
       }
       mul(float floats)
       {
            f=floats;
       }
       mul operator *(mul m2)
       {
            mul temp;
            temp.f=i*m2.f;
            return temp;
       }
       void display()
       {
            cout<<"multiple = "<<f;
       }
};

int main()
{   int integer;
    float floats;
    cout<<"Enter the integer and float value: \n";
    cin>>integer>>floats;
    mul m1(integer),m2(floats);
    mul m3=m1*m2;
    m3.display();
    
}
