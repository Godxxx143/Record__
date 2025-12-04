#include<iostream>
using namespace std;
class cal
{
public:
int add (int a,int b)
{
return a+b;
}
int add(int a,int b,int c)
{
return a+b+c;
}
};
int main()
{
int a,b,c;
cal s;
cout<<"enter a values a,b,c";
cin>>a>>b>>c;
cout<<s.add(a,b)<<endl;
cout<<s.add(a,b,c);
return 0;
}
