/* Muhammad Didik Wahyudi 20051397040 */

#include<iostream>

#include<conio.h>

#include<iomanip>

using namespace std;

main(){

int nilai;
awal:
cout<<"\t\t\t**********************\n";
cout<<"\t\t\tProgram Segitiga Angka\n";
cout<<"\t\t\t**********************\n\n";
cout <<"Masukan Segitiga Angka : ";cin>>nilai;
cout <<endl;
cout <<"SEGITIGA ANGKA"<<endl;
cout<<endl;
   
   
for(int a=1; a<=(nilai*2)-1; a++)
    {
     if (a <= nilai){
     for(int b = 1; b <= a; b++)
            cout<<b;
        }else{
        for(int c = 1; c <=nilai*2-a; c++)
            cout<<c;
     }
        cout<<endl;
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


}       
}

