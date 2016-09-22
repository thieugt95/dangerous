
#include <iostream>
#include <conio.h>
using namespace std;
int a[100],n,x;

int TimKiemNhiPhan(int M[],int N,int X)
{
	int First =0;
	int Last =N-1;
	while (First <=Last)
	{
		int Mid=(First+Last)/2;
		if(X==M[Mid])
		return Mid;
		if(X<M[Mid])
		{
			Last=Mid-1;
		}
		else
		{
			First=Mid+1;
		}
	}
	return -1;
}
void nhap()
{
	cout<<"Nhap So Phan tu cua mang"; cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	cout<<"Nhap so can tim";cin >>x;
}
 main()
{
	nhap();
	cout<<"So lan xuat hien : "<<TimKiemNhiPhan(a,n,x);
	
	getch();
}
