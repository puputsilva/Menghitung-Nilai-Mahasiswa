#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

float awal()
{
    cout<<"\t\t\t\t   LAPORAN NILAI PEMROGRAMAN C++"<<endl;
    cout<<"\t\t\t\tUNIVERSITAS SINGAPERBANGSA KARAWANG"<<endl;
}

float tampilan()
{
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"NO.       NPM         NAMA MAHASISWA       UTS     UAS    ABSEN    TUGAS    NILAI AKHIR     "<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
}


main(int argc,char *argv[])
{
    int i;
    int jum;
    float nilai_UTS [20];
    float nilai_UAS [20];
    float nilai_absen [20];
    float nilai_tugas[20];
    float nilai_akhir [20];
    char angka_npm [50][50];
    char nama_siswa[50][50];
    char ulang;

    do
{
    cout<<"Masukkan Jumlah Siswa = ";
    cin>>jum;
    cout<<endl;

    for(i=1;i<=jum;i++)
    {
        cout<<"Siswa Ke-"<<i<<endl;
        cout<<"NPM\t\t= "; cin>>angka_npm[i];
        cout<<"Nama\t\t= "; cin>>nama_siswa[i];
        cout<<"Nilai UTS\t= "; cin>>nilai_UTS[i];
        cout<<"Nilai UAS\t= "; cin>>nilai_UAS[i];
        cout<<"Nilai Absen\t= "; cin>>nilai_absen[i];
        cout<<"Nilai Tugas\t= "; cin>>nilai_tugas[i];
        nilai_akhir[i]=((nilai_UTS[i]*0.3)+(nilai_UAS[i]*0.4)+(nilai_absen[i]*0.1)+(nilai_tugas[i]*0.2));
        cout<<endl;
    }
        awal();

cout<<endl;
tampilan();

for(i=1;i<=jum;i++)
{
    cout<<setiosflags(ios::left)<<" "<<setw(6)<<i;
    cout<<setiosflags(ios::left)<<" "<<setw(19)<<angka_npm[i];
    cout<<setiosflags(ios::left)<<" "<<setw(15)<<nama_siswa[i];
    cout<<setiosflags(ios::left)<<" "<<setw(7)<<nilai_UTS[i];
    cout<<setiosflags(ios::left)<<" "<<setw(7)<<nilai_UAS[i];
    cout<<setiosflags(ios::left)<<" "<<setw(7)<<nilai_absen[i];
    cout<<setiosflags(ios::left)<<" "<<setw(8)<<nilai_tugas[i];
    cout<<setiosflags(ios::left)<<" "<<setw(8)<<nilai_akhir[i];
    cout<<endl;

}

    cout<<"----------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\tDibuat Oleh : Puput Silva Rosiana"<<endl;
     cout<<"Apakah Anda Ingin Mengulangnya Kembali (Y/T)?";
     cin>>ulang;
     system("cls");
}
    while((ulang=='Y')||(ulang=='y'));
    cout<<endl<<endl;
}
