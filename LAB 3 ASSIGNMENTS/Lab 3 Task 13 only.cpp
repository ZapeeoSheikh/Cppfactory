//Task-13  (Geometry Calculator)
#include <iostream>    
using namespace std;
main()
{
	//Variables
float radius,length,width,base,height,h,r,trapezoid,h_1,a,b,
      circle,rectangle,triangle ,cylinder ,user;

//constant
const int p=3.14159;

//header
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can display the following menu given in instruction handout"<<endl;
cout<<"\nPress 1 = Area of a circle , 2 = Area of a Rectangle , 3 = Area of a Triangle"<<endl;
cout<<"4 = Area of a Cylinder , 5 = Area of Trapezoid , 6 = Quit"<<endl;
cout <<"----------------------------------------------------------"<<endl;
//input
cin>>user;

//Formulas


//Area of circle
    if(user==1)
      {cout<<"...AREA OF CIRCLE..."<<endl;
      cout<<"Enter the radius of the circle: ";
      cin>>radius;
      circle=p*(radius*radius);
      if(radius>0)
      cout<<"Area of Circle is: "<<circle;
	  else
	  cout<<"Error, Please enter positive number or greater than 0...";  }

//Area of rectangle
         else if(user==2)
         {cout<<"...AREA OF RECTANGLE..."<<endl;
		 cout<<"Enter the length of the rectangle: ";
         cin>>length;
         cout<<"Enter the width of rectangle: ";
         cin>>width;
         rectangle=length*width;
         if(length>0 && width>0)
         cout<<"Area of Rectangle is: "<<rectangle;
		 else
	     cout<<"Error, Please enter positive number or greater than 0...";   }
//Area of Triangle        
             else if(user==3)
             {cout<<"...AREA OF TRIANGLE..."<<endl;
			 cout<<"Enter the base of the triangle: ";
             cin>>base;
             cout<<"Enter the height of triangle: ";
             cin>>height;
             triangle=base*height* 0.5;
             if(base>0 && height>0)    
             cout<<"Area of Triangle is: "<<triangle; 
			 else
	         cout<<"Error, Please enter positive number or greater than 0...";  }
// Area of Cylinder              
                 else if(user==4)
                 {cout<<"...AREA OF CYLINDER..."<<endl;
				 cout<<"Enter the radius of the cylinder: ";
                 cin>>r;
                 cout<<"Enter the height of cylinder: ";
                 cin>>h;
                 cylinder= 2 * p * (r*r) + h *(2 * p * r);
                 if(r>0 && h>0)
                 cout<<"Area of Cylinder is: "<<cylinder;  
				 else
	             cout<<"Error, Please enter positive number or greater than 0..."; }
//Area of trapezoid                 
                     else if(user==5)
                     {cout<<"...AREA OF TRAPEZOID..."<<endl;
					 cout<<"Enter the base 1 of the trapezoid: ";
                     cin>>a;
                     cout<<"Enter the base 2 of the trapezoid: ";
                     cin>>b;
                     cout<<"Enter the height of trapezoid: ";
                     cin>>h_1;
                     trapezoid=h_1* ( (a + b) / 2 );
                     if(a>0 && b>0 && h_1>0)
                     cout<<"Area of Trapezoid is: "<<trapezoid; 
					 else
					 cout<<"Error, Please enter positive number or greater than 0..."; }
  
//Quit                   
                         else if (user==6)
                         {cout<<"--------Quit---------";}
else
{cout<<"Error occurs"<<endl;
cout<<"Press number between 1 to 5 only from the number pad"<<endl;}

//Alhumdullah work sucessfully
//Terminate program
return 0;

}

