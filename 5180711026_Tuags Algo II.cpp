#include <iostream>
using namespace::std;

float pemangkatan(float angka,float pemangkat){
   if( pemangkat == 0)
    return 1;
    if (pemangkat>0)
    return angka*pemangkatan(angka,pemangkat-1);
    else
    if (pemangkat<0)
    return 1/angka*pemangkatan(angka,pemangkat+1);;
    }

main() {int a,b;
cout<<"Masukan angka :";
cin>>a;
cout<<"Masukan Pangkat :";
cin>>b;
cout<<"Hasil Pemangkatan :"<<pemangkatan(a,b);


}

