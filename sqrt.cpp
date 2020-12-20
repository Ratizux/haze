#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctime>
#define SPEED 0.00000001
//10 ^ -8
using namespace std;
int main()
{
	int begin,end;
	begin=clock();

	double r,x;
	long double sum=0;
	for(r=0.0;r<=1;r+=SPEED)
	{
		x=sqrt(r);
		sum+=x;
	}
	end=clock();
	cout<<end-begin<<endl;
	cout<<sum<<endl;
	return 0;
}
