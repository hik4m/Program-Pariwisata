#include <iostream>
#include <string>
using namespace std;

int main()
{
    {
    string kodeplat[] = {"AG", "W", "B", "D", "LW"};
    string jenisKendaraan[] = {"Motor", "Mobil", "Elf","Bus"};
    int harga[] = {3000, 5000, 15000, 20000};
    int hargatiket[] = {56000, 200000, 680000};
    string nama, plat;
    int pilihanPlat, pilihanTiket, jumlah, pilihanTotal, pilihanKendaraan, jumlahKendaraan, jumlahHtm, jumlahKeseluruhan;
    string tiket[] = {"Reguler", "Premium", "Vip Akses"};
    
    cout << "==================================" << endl;
    cout << "||  PROGRAM WISATA GABUT HIKAM  ||" << endl;
    cout << "==================================" << endl;
    
    cout << "Input Nama Anda : ";
    cin >> nama;
    
    cout << "==================================" << endl;
    cout << "||     Jenis Kendaraan Anda     ||" << endl;
    cout << "==================================" << endl;
    for(int i = 0; i < 4; i++){
    cout << i + 1 << ". " << jenisKendaraan[i] << " " << "Rp." << harga[i] << endl;
    }
    
    cout << "==================================" << endl;
    
    cout <<  "Input Jenis Kendaraan: ";
    cin >> pilihanKendaraan;
    
    cout << "Input Berapa Jumlah Kendaraan : ";
    cin >> jumlahKendaraan;
    
    cout << "==================================" << endl;
    cout << "||          DAFTAR PLAT         ||" << endl;
    cout << "==================================" << endl;
    for(int i = 0; i < 5; i++){
    cout << i + 1 << ". " << kodeplat[i] << endl;
    }
    cout << "==================================" << endl;
    cout << "Pilih Kode Plat : ";
    cin >> pilihanPlat;
    
    cout << "Masukkan Plat Nomor Kendaraan [contoh : " << kodeplat[pilihanPlat -1] <<  " 1234 EP] : ";
    cin.ignore();
    getline(cin, plat);
    
    kodeplat [0] = "Nganjuk";
    kodeplat [1] = "Mojokerto";
    kodeplat [2] = "Jakarta";
    kodeplat [3] = "Bali";
    kodeplat [4] = "Lamongan";
    
    
    if (pilihanPlat >= 1 && pilihanPlat <= 5){
    cout << "=================================================" << endl;
    cout << "         Hai Pelanggan dari " << kodeplat[pilihanPlat -1] << "! " << endl;
    cout << " Silahkan Memilih Tiket Yang Sudah Disediakan !  " << endl;
    cout << "=================================================" << endl;
    for(int i = 0; i < 3; i++){
    cout << i + 1 << ". " << tiket[i] << " " << "Rp." << hargatiket[i] << endl;
    }
    cout << "=================================================" << endl;
    
    cout << "Pilih Tiket : ";
    cin >> pilihanTiket;
    
    cout << "Kuantitas Pembelian : "; 
    cin >> pilihanTotal;
    
    jumlahHtm = harga[pilihanKendaraan -1] * jumlahKendaraan;
    jumlah = hargatiket[pilihanTiket -1] * pilihanTotal;
    jumlahKeseluruhan = jumlahHtm + jumlah;
    
        if (pilihanTiket >= 1 && pilihanTiket <= 3) {
        
        cout << "==============================================" << endl;
        cout << "||          DETAIL PEMBAYARAN ANDA          ||" << endl;
        cout << "==============================================" << endl;
        cout << "Nama Pengunjung         : " << nama << endl;
        cout << "Daerah (menurut plat)   : " << kodeplat[pilihanPlat -1] << endl;
        cout << "Plat Nomor Kendaraan    : " << plat << endl;
        cout << "Jenis Kendaraan         : " << jenisKendaraan[pilihanKendaraan -1] << endl;
        cout << "Jumlah Kendaraan        : " << jumlahKendaraan << " " << jenisKendaraan[pilihanKendaraan -1] << endl;
        cout << "Harga Tiket Masuk       : " << "Rp."<< harga[pilihanKendaraan -1] << endl;
        cout << "Total Harga Tiket Masuk : " << "Rp." << jumlahHtm<< endl;
        cout << "==============================================" << endl;
        cout << "Jenis Tiket Akses       : " << tiket[pilihanTiket -1] << endl;
        cout << "Jumlah Tiket Di Beli    : " << pilihanTotal << " Tiket " << tiket[pilihanTiket -1] <<  endl;
        cout << "Harga Satuan Tiket      : " << "Rp." << hargatiket[pilihanTiket -1] << endl;
        cout << "Total Harga Tiket Akses : " << "Rp." <<jumlah << endl;
        cout << "==============================================" << endl;
        cout << "Total Harga Keseluruhan : " << "Rp." << jumlahKeseluruhan << endl;
        cout << "==============================================" << endl;
        }
    }
}
    return 0;
} 