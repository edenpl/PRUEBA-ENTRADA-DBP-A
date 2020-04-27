#include<iostream>
#include<stdlib.h>
using namespace std;
void crear(int **&m ,int f,int c)
{
	m = new int *[f];
	for(int i=0;i<f;i++)
		m[i]=new int [c];
}
void ingresar(int **&m,int f,int c)
{
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
		cout<<i<<" "<<j<<" = ";cin>>*(*(m+i)+j);
		}
	}
}
void mostrar(int **&m,int f,int c)
{
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		cout<<*(*(m+i)+j)<<" ";
		cout<<"\n";
	}
}
void media(int **&ma,int **&mb,int **&mc,int f,int c)
{
	int x;
	for(int i=0;i<f;i++)
	{
		x=0;
		for(int j=0;j<c;j++)
		{
		*(*(mc+i)+j)=(*(*(ma+i)+j)+*(*(mb+i)+j))/2;
		}
	}
}
int main(){
	int f,c;
	cout<<"f = ";cin>>f;
	cout<<"c = ";cin>>c;
	int **ma;
	int **mb;
	int **mc;
	cout<<"matriz a"<<'\n';
	crear(ma,f,c);
	ingresar(ma,f,c);
	cout<<"matriz b"<<'\n';

	crear(mb,f,c);
	ingresar(mb,f,c);
	
	cout<<"media de la matriz a y b"<<'\n';
	crear(mc,f,c);
	media(ma,mb,mc,f,c);
	mostrar(mc,f,c);
	
	return 0;	
}