/* Muhammad Didik Wahyudi 20051397040 */




#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a=3,b,hasil,deret;

awal:
cout<<"\t\t\t**************************\n";
cout<<"\t\t\tProgram Menjumlahkan Deret\n";
cout<<"\t\t\t**************************\n\n";

cout <<"Masukkan Jumlah Deretnya : ";    cin>>deret;
cout <<endl;

cout <<"Deretnya : "<<a<<",";
hasil=a;
for(int i=0; i<deret-1; i++)
{
    b=a+4; a=b;
    cout<<b<<",";
    hasil=hasil+b;
}
cout <<endl<<endl<<"Jumlah deretnya : "<<hasil<<endl;

cout<<"\n\n\nApakah Anda Ingin Mengulang [Y/N] ? "  ;
char m ;
cin>>m;
if (m == 'y' || m== 'Y')
goto awal;
else if (m == 'n' || m== 'N')
{

cout<<endl;
goto akhir;
}
akhir:
cout<<"\n\n\t\t\t    \"TERMA KASIH\"";
getch();
}

