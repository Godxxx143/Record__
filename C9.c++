#include<iostream>
using namespace std;
int main()
{
try
{
int num =10;
int deno=0;
int res;
if (deno==0)
{
throw runtime_error("division by zero not allowed!!");
}
res=num/deno;
cout<<"result after division:"<<res<<endl;
}
catch(const exception & e)
{
cout<<"exception:"<<e.what()<<endl;
}
return 0;
}
