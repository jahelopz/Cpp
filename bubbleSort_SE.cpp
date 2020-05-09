#include<iostream>
using namespace std;

int main(){
	
	int a[]={9,1,8,2,7,3,6,4,5},i,j,aux;
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[i]>a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
