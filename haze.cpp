#include <cstdio>
#include <iostream>
#include <ctime>

int n,m,x[28]={};

bool rlock[28]={},slock[28]={},slockr[28]={};

void dfs(int line,int row)
{
	if(rlock[row]||slock[line+row]||slockr[line-row+m])
	return;
	
	x[line]=row;
	
	rlock[row]=true;
	slock[line+row]=true;
	slockr[line-row+m]=true;
	for(int i=0;i<n;i++)
	{
		dfs(line+1,i);
	}
	rlock[row]=false;
	slock[line+row]=false;
	slockr[line-row+m]=false;
	
	return;
}

int main()
{
	long int a;
	a=clock();
	n=14;
	m=n-1;
	for(int i=0;i<n;i++)
	{
		dfs(0,i);
	}
	printf("%ld",clock()-a);
}
