#include <iostream.h>
#include <conio.h>
main()
{
int A[5]; //deklarasi array
//input element array
for (int i=0;i<5;i++)
	{cout<<"A["<<i<<"] = ";
    cin>>A[i];					}
//menampilkan isi dari elemen array
for (int c=0;c<5;c++)
	{cout<<"Nilai pada elemen ke "<<c+1<<" adalah = "<<A[c]<<endl; }
getch();
}
