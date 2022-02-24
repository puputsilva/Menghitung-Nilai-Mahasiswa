#include <iostream>
using namespace std;

main()
{
	int prk,uts,uas;
	char nm[25],kls[5],npm[13];
	float na;

	cout <<"Nama\t\t\t="; cin>>nm;
	cout <<"Kelas\t\t\t="; cin>>kls;
	cout <<"NPM\t\t\t="; cin>>npm;
    cout<<"Nilai prak\t= "; cin>>prk;
    cout<<"Nilai uts\t= "; cin>>uts;
    cout<<"Nilai uas\t= "; cin>>uas;
    na=prk*0.20+uts*0.30+uas*0.50;
    cout <<"Nilai Akhir nya adalah  ="<<na<<endl;
}
