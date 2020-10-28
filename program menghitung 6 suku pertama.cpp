/* Muhammad Didik Wahyudi 20051397040 */



#include <iostream>
using namespace std;

int main(){

int a,b,n,barisan,deret;
awal:
cout<<"\t\t\t******************************\n";
cout<<"\t\t\tProgram Menghitung jumlah suku\n";
cout<<"\t\t\t******************************\n\n";
 
cout <<"masukan suku pertama =";
cin >> a;
 
cout <<"masukan beda suku =";
cin >> b;
 
cout <<"masukan suku ke n =";
cin >> n;
 
barisan=a+(n-1)*b;
deret=(2*a+(n-1)*b)*n/2;
cout <<"barisan aritmatika = "<<barisan<<endl;
cout <<"deret aritmatika ="<<deret;
 
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
