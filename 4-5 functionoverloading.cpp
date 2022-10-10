//Function area() is overloaded three times
#include<iostream>
//Decclaration of Function Prototypes
int area(int);
int area(int,int);
float area(float);
  
int main()  
{
    cout<<"Calling the area() function for computing the area of a square(side = 4) - "<<area(5)<<"\n";
	cout<<"Calling the area() function for computing the area of a rectangle(length=5, breadth=10) -"<<area(5,10)<<"\n";
    cout<<"Calling the area() function for computing the area of a circle(radius=5.5) -"<<area(5.5)<<"\n";
return 0;    
}

int area (int side)                                   //Area of square
{
	return(side*side);
}
int area(int length, int breadth)                    //Area of rectangle
{
    return(length*breadth);
}
float area(float radius)                            //Area of circle
{
     return(3.14*radius*radius);
}
