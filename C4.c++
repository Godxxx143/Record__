#include<iostream>
using namespace std;
class Distance{
private:
int m;
friend int addFive(Distance);
public:
Distance():m(0){}
};
int addFive(Distance d){
d.m+=5;
return d.m;
}
int main()
{
Distance d;
cout<<"Distance:" <<addFive(d);
return 0;
}
