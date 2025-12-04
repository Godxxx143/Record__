#include<iostream> 
using namespace std; 
class Room{ 
public: 
double length; 
double breadth;
double height;
double calculate_a(){ 
return length*breadth; 
}
double calculate_v()
{
return length*breadth*height; 
}
};
int main()
{ 
Room room1; 
room1.length=42.5; 
room1.breadth=30.8;
room1.height=19.2;
cout<<"area of room ="<< room1.calculate_a()<<"\n";
cout<<"volume of room ="<< room1.calculate_v()<<"\n”;
return 0;
}p
