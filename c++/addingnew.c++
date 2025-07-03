#include<iostream>
using namespace std;
class kilometer
{
    private:
        int km;
    public:
        kilometer()
        {   
            cout<<"enter the distance in kilometers: ";
            cin>>km;
        }
   
        void display()
        {
                cout<<"the distacne in kilometer is : "<<km<<endl;

        }
        operator meters()
        {   int meter;
            meter=km*1000;
            return meters(meter);
        }
};

class meters
{
    private:
        int m;
    public:
        meters()
        {
            m=0;
        }
        meters(int meter)  // To initialize value of meter from conversion formula ko return type to meters class ko parametrized consturctors
        {
            m=meter;
        }
    void display()
        {
            cout<<"the distacne in meter is : "<<m<<endl;
        }
};

int main()
{
    kilometer k;
    k.display();
    meters met;
    met=k;
    met.display();
}