#include <iostream>
#include <cmath>
using namespace std;

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:

  void Print(Point p);
  

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:

void Point::Print(Point p)
{
     cout<<"("<<p.Get_X()<<","<<p.Get_Y()<<")";
}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

class Rectangle
{
    private:
        Point p1,p2,p3,p4;
    public:
        Rectangle();
        Rectangle(Point a,Point b);
        //print function for displaying the points of the rectangle
        void Display();
        //function for calculating one side
        int side1();

        //function for calculating the other side
        int side2();
        
        //function for calculating the area of the Rectangle
        int area();
        
    

};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

Rectangle::Rectangle()
{
    p2.Move(0,1);
    p3.Move(1,1);
    p4.Move(1,0);
    
}

Rectangle::Rectangle(Point a,Point b)
{
    p1.Set_X(a.Get_X());
    p1.Set_Y(a.Get_Y());
    p2.Set_X(b.Get_X());
    p2.Set_Y(b.Get_Y());
    p3.Set_X(p2.Get_X());
    p3.Set_Y(p1.Get_Y());
    p4.Set_X(p1.Get_X());
    p4.Set_Y(p2.Get_Y());
}

void Rectangle::Display()
{
    p1.Print(p1);
    p2.Print(p2);
    p3.Print(p3);
    p4.Print(p4);
}

int Rectangle::side1()
{
     return sqrt((p1.Get_X()-p3.Get_X())*(p1.Get_X()-p3.Get_X()));
}

int Rectangle::side2()
{
    return sqrt((p2.Get_Y())-p3.Get_Y())*((p2.Get_Y())-p3.Get_Y());
}

int Rectangle::area()
    {
        return side1()*side2();
    }


// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
    int a,b,c,d;
    Rectangle R1;
    R1.Display();
    cout<<endl;
    cout<<"Enter coordinates for 1st point of rectangle: ";
    cin>>a>>b;
    Point x(a,b);
    cout<<"Enter coordinates for the diagonally opposite point: ";
    cin>>c>>d;
    Point y(c,d);
    Rectangle R2(x,y);
    R2.Display();
    cout<<endl;
    cout<<"Area of the rectangle is: "<<R2.area()<<endl;
    




// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

  return 0;
}

