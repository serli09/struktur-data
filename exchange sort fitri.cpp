#include <iostream>
#include <conio.h>
using namespace std;


int data[15],data2[15];
int n;
void tukar(int a,int b)
{
int t;
t = data[b];
data[b] = data[a];
data[a] = t;
}
void Input()
{
cout<<"Inputkan jumlah data = ";
cin>>n;
cout<<"--------------------------------------"<<endl;
for(int i=0;i<n;i++)
{
cout<<"Inputkan data ke-"<<(i+1)<<" = ";cin>>data[i];
data2[i] = data[i];
}
cout<<endl;
}
void Tampil()
{
for(int i=0;i<n;i++)
{
cout<<data[i]<<" ";}
cout<<endl;
}
void exchange_sort()
{
for (int i=0; i<n-1; i++)
{
for(int j = (i+1); j<n; j++)
{
if (data [i] > data[j]) tukar(i,j);
}
Tampil();
}
cout<<endl;
}
main()
{
cout<<"-------------------------------------"<<endl;
cout<<"           Exchange Sort             "<<endl;
cout<<"-------------------------------------"<<endl;
Input();
cout<<"Proses Exchange Sort,,,,,,,"<<endl;
cout<<"-------------------------------------"<<endl;
Tampil();
exchange_sort();

getch();}
