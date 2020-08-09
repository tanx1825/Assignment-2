#include <iostream>
using namespace std;

class Rectangle
{
    public:
	double l,b;

    double Area() 
    {
        return l*b;
    }

    double Perimeter() 
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle rect;
    rect.l=1.0;
    rect.b=1.0;
    cout<<"Enter Length and Width";
    cin>>rect.l>>rect.b;

        if(rect.l>=0.0 && rect.l<=20.0 && rect.b>=0.0 && rect.b<=20.0)
        {
            rect.l=rect.l;
            rect.b=rect.b;
        }
        else
        {
            rect.l=1.0;
            rect.b=1.0;
        }

    cout<<"Area : "<<rect.Area()<<endl;
    cout<<"Perimeter : "<<rect.Perimeter()<<endl;

	return 0;
}