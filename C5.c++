#include <iostream>
using namespace std;
class pa 
{
private:
int real , imag;
public:
pa(int r=0, int i=0)
{
real = r;
imag=i;
}
pa operator+(pa const & obj)
{
pa res;
res.real = real+obj.real;
res.imag= imag +obj.imag;
return res;
}
void print() {cout<< real<<"+i"<<imag<<"\n";}
};
int main()
{
pa c1(10,8),c2(2,6);
pa c3=c1+c2;
c3.print();
}
