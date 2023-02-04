#include <iostream>
using namespace std;

//fungsi  tanpa nilai balik dengan argumen, untuk menjumlahkan hasil transaksi topup
void topupsaldo(int saldo, int jumlah, string metode){
    int topup = saldo + jumlah;
    cout << "SELAMAT! TRANSAKSI TOPUP DIAMOND ANDA SEBESAR "<<jumlah<<"BERHASIL, MELALUI METODE PEMBAYARAN "<<metode<<endl;
    cout << "SALDO DIAMOND ANDA SAAT INI : "<< topup <<endl;

}
//fungsi utama yang harus ada didalam bahasa C++
    int main(){
    	//tipe data int buat membuat sebuah bilangan bulat
        int saldo = 0, jumlah = 0, pilihan, pembayaran;
        int harga[6] = {0, 500, 600, 100, 1000, 550};
        //tipe data string untuk menyimpan daftar pembelian aplikasi
        string beli [6] = {""," paket mingguan ", " paket skin ", " paket emot ", " paket efek ", " paket member "};
        string metode;
        char pilih;
		//tipe data char untuk membuat sebuah huruf

		//do disisi untuk terus mengulang program aplikasinya
        do{
        	//perintah cls disini untuk membersihkan layar console atau menghapus teks sebelumnya
        	menu:
            system("cls");
            int i=0, topup=saldo+jumlah;
            //program menu awalnya
            cout <<"===================================================="<<endl;
            cout <<"\tPROGRAM APLIKASI TOPUP GAME ONLINE                "<<endl;
            cout <<"===================================================="<<endl;
            cout <<"SALDO ANDA SAAT INI : "<<topup<<endl;
            cout <<"===================================================="<<endl;
            cout <<"MENU :                                              "<<endl;
            cout <<"[1] TOPUP SALDO DIAMOND                             "<<endl;
            cout <<"[2] PEMBELIAN DALAM APLIKASI                        "<<endl;
            cout <<"[3] KELUAR                                          "<<endl;
            cout <<"===================================================="<<endl;
            cout <<"MASUKAN PILIHAN ANDA: "; cin >>pilihan;
            //cin itu printah untuk memilih output yang akan dijalankan

            switch(pilihan){
            //switch ini untuk perintah input dapat memilih menu program yang akan dijalankan
            case 1:
            //case 1 ini kode program case yang akan berjalan jika nilai input sudah terpenuhi
            system("cls");
            cout <<"MASUKAN JUMLAH TOPUP DIAMOND ANDA : ";cin >>jumlah;
            cout <<"[1] KARTU KREDIT "<<endl;
            cout <<"[2] KARTU DEBIT "<<endl;
            cout <<"[3] TRANSFER BANK "<<endl;
            cout <<"PILIH METODE PEMBAYARAN : "; cin >>pembayaran;

            if(pembayaran ==1) metode = "kartu kredit";
            else if(pembayaran ==2) metode = "kartu debit";
            else if(pembayaran ==3) metode = "transfer bank";
            else cout <<"PILIHAN TIDAK VALID"<<endl;
            cout <<endl;
            //pemanggilan pungsi tanpa nilai balik dngn argumen agar dpt tercetak
            topupsaldo(saldo,jumlah,metode);
            break;
			//untuk menghentikan kode program case jika kondisi telah terpenuhi
			
            case 2:
            system("cls");
            cout <<"SALDO DIAMON ANDA SAAT INI : "<< topup <<endl;
            cout <<"SILAHKAN LAKUKAN PEMBELIAN : "<<endl;
            //for untuk terus mengulangi mencetak nilai aray jika bernilai false
            for(i; i<=5; i++){
              if(i==1)cout<< i << beli[i] << harga[i] <<endl;  
              if(i==2)cout<< i << beli[i] << harga[i] <<endl; 
              if(i==3)cout<< i << beli[i] << harga[i] <<endl; 
              if(i==4)cout<< i << beli[i] << harga[i] <<endl; 
    		  if(i==5)cout<< i << beli[i] << harga[i] <<endl;
            }
            cout <<endl;
            cout <<"MASUKAN PILIHAN : "; cin>>i;
            if(topup <= harga[1,2,3,4,5]){
            	cout <<"SALDO DIAMON ANDA TIDAK CUKUP ";
            if(i >= 5){
            	if(topup<=harga[1,2,3,4,5]){
                 	cout << "SELAMAT PEMBELIAN ANDA : " << beli[i] << "SEHARGA: " << harga[i] << "DIAMOND, ANDA BERHASIL! "<<endl;
                 	cout << "SISA SALDO DIAMOND ANDA SAAT INI : " << topup - harga[i];
				 	cout <<endl;
                }
            }
        break;
            case 3:
                system("cls");
                cout << "TERIMAKASIH TELAH MENGGUNAKAN LAYANAN KAMI" <<endl;
           
            }
        }
    cout <<endl;
    cout <<"KEMBALI KE MENU UTAMA? (Y/T) : "; cin >>pilih;
    if(pilih =='Y') goto menu;
    else return 0;
    
	}while(pilih);
	//jika nilai input sesuai dengan kondisi while maka akan menjalankan program dalam do
}

