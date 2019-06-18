#include <stdio.h>
#include <iostream.h>
#include <conio.h>

int main(){
//deklarasi array
int A[10]={12,24,13,25,10,11,21,20,15,18};
int bil;

//menampilkan elemen array
for (int i=0;i<10;i++)
	{cout<<A[i]<<endl;}
cout<<endl;

//memasukkan nilai yang akan dicari
cout<<"Masukkan nilai yang akan dicari : ";
cin>>bil;

//pencarian data
for (int c=0;c<10;c++)
	{
    if (A[c]==bil)
    {cout<<"Nilai yang anda cari terdapat pada indek ke- "<<c;break;}
   }
getch();}
