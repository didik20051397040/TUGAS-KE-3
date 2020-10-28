/* Muhammad Didik Wahyudi 20051397040 */

#include<iostream>

#include<conio.h>

#include<iomanip>

using namespace std;

main(){

int i,j;

cout<<"\t\t\t***********************\n";
cout<<"\t\t\tProgram Tabel Perkalian\n";
cout<<"\t\t\t***********************\n\n";


 

for (i=1;i<=10;i++)

{ cout<<setw(5)<<i;

 

for (j=1;j<=10;j++)

cout<<setw(5)<<i*j;

cout<<endl;

}

getch();

}

