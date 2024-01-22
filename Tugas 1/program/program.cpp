#include <iostream>

using namespace std;
int main()
{
	char nama[40],x;
	int nocom,jam1,mnt1,dtk1,jam2,mnt2,dtk2,jmldtk,totalbayar;
	int tarif=5000;
	
	cout <<endl;
	cout <<"----------- Warnet KKB Ikopin ---------- \n";
    cout <<"------------------------------------------ \n";
    cout << endl;
	
	cout<<"=========================================="<<endl;
	cout<<"No Komputer : ";cin>>nocom;
	cout<<"Nama Pelanggan : ";cin>>nama;
	cout<<"=========================================="<<endl;
	cout << endl;
	 
	cout <<"------------------ JAM MULAI ----------------- \n";
	cout<<"Jam Mulai     : ";cin>>jam1;
	cout<<"Menit Mulai   : ";cin>>mnt1;
	cout<<"Detik Mulai   : ";cin>>dtk1;
	cout<<"=========================================="<<endl;
	cout << endl;
	
	cout <<"----------------- JAM SELESAI ---------------- \n";
	cout<<"Jam Selesai   : ";cin>>jam2;
	cout<<"Menit Selesai : ";cin>>mnt2;
	cout<<"Detik Selesai : ";cin>>dtk2;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	jmldtk = ((jam2-jam1)*3600) + ((mnt2-mnt1)*60) + (dtk2-dtk1);
	totalbayar = jmldtk * tarif / 3600;
	
	cout<<"----------- Warnet KKB Ikopin ---------- \n"<<endl;
	cout<<"No Komputer     : "<<nocom<<endl;
	cout<<"Nama Pelanggan  : "<<nama<<endl;
	cout<<"Lama Penggunaan : "<<(jam2-jam1)<< "Jam" <<(mnt2-mnt1)<< "Menit" <<(dtk2-dtk1)<< "Detik" <<endl;
	cout<<"Total Bayar     : Rp."<<totalbayar<<endl;
	cout<<"=========================================="<<endl;
}