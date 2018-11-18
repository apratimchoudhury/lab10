#include<iostream>
using namespace std;

//declaration of the class rectangle
class rectangle
{
   public:
        double length,breadth;      //declaration of length and breadth
   public:
        void setlen(double lenInp);     //function for setting length
        void setbrd(double brdInp);     //function for setting breadth
        double area(double length, double breadth);          //function of calculating area of rectangle
        double perimeter(double length, double breadth);     //function for calculating perimeter of rectangle
};

//Methods for the class rectangle 

void rectangle::setlen(double lenInp)
{
    length=lenInp;
}

void rectangle::setbrd(double brdInp)
{
    breadth=brdInp;
}

double rectangle::area(double length, double breadth)
{
    return length*breadth;
}

double rectangle::perimeter(double length, double breadth)
{
    return 2*(length + breadth);
}

//main function for checking the working of the functions
int main()
{
    double l1,b1,l2,b2;
    cout<<"Enter the dimensions for the first rectangle: "<<endl;
    cout<<"Length: ";
    cin>>l1;
    cout<<endl;
    cout<<"Breadth: ";
    cin>>b1;
    cout<<"Enter the dimensions of the second rectangle: "<<endl;
    cout<<"Length: ";
    cin>>l2;
    cout<<endl;
    cout<<"Breadth";
    cin>>b2;
    rectangle rect1;
    rectangle rect2;
    rect1.setlen(l1);
    rect1.setbrd(b1);
    rect2.setlen(l2);
    rect2.setbrd(b2);
    cout<<"Area of 1st rectangle is: "<<rect1.area(l1,b1)<<endl;
    cout<<"Perimeter of 1st rectangle is: "<<rect1.perimeter(l1,b1)<<endl;
    cout<<"Area of 2nd rectangle is: "<<rect1.area(l1,b1)<<endl;
    cout<<"Perimeter of 2nd rectangle is: "<<rect1.perimeter(l1,b1)<<endl;
    return 0;
}









