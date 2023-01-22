#include<iostream>
using namespace std;

/*
        TUGAS UAS DASAR PEMROGRAMAN SEMESTER 1
    Nama            : Rani Febriani
    Kelas           : A (Semester 1)
    Uas Mata Kuliah : Dasar Pemrograman
*/

struct text {
    string text_pakaian,text_perabotan,text_sandal,jmlh_produk,harga_produk,potongan_harga,total_bayar;
};

void tampilanAtas(){
    string tanggal;
    for (int a = 1;a <= 6; a++){
        cout << "\t";
    }
    cout << "\tTOKO SERBA 35.000\n";

    for (int a = 1;a <= 6; a++){
        cout << "\t";
    }
    cout << "================================\n";
    for (int a=1; a<=7;a++){
        cout << "\t";
    }
    cout << "Jln. Syamsudin sh" << endl;
    for (int a = 1; a <= 5 ; a++){
        cout << "\t";
    }
    cout << "\t\tTlp. (0000)214 012" << endl;
    for (int a = 1; a <=7; a++){
        cout << "\t";
    }
    cout << "     SUKABUMI" << endl;
    cout << endl;

    cout << "      ============================================================================================================\n";
    cout << "\tTanggal      : ";
    cin >> tanggal;
    cout << "      ============================================================================================================\n";
}

void inti (){
    text text1;
        text1.text_pakaian      = "\tPakaian                       : ";
        text1.text_perabotan    = "\tPerabotan                     : ";
        text1.text_sandal       = "\tSandal                        : ";
        text1.jmlh_produk       = "\tJumlah Produk                 : ";
        text1.harga_produk      = "\tHarga Satu Produk             : ";
        text1.potongan_harga    = "\tPotongan Harga                : ";
        text1.total_bayar       = "\tTotal Yang Harus Di Bayar     : ";
    int harga = 35000,pakaian,perabotan,sandal,total_produk,total;
    float harga_pemotongan;
    float diskon [2] = {0.1, 0.05};
    cout << "\t====Jumlah Produk Perjenis Produk====\n";
    cout << text1.text_pakaian;
    cin >> pakaian;
    cout << text1.text_perabotan;
    cin >> perabotan;
    cout << text1.text_sandal;
    cin >> sandal;
    total_produk = pakaian+perabotan+sandal;
    cout << text1.jmlh_produk << total_produk << endl;
    cout << text1.harga_produk << harga << endl;
    total = total_produk*harga;
    cout << "\tTotal                         : " << total << endl;
    if (total >= 300000){
        cout <<"\tSELAMAT ANDA MENDAPATKAN DISKON 10%" << endl;
        harga_pemotongan = total * diskon [0];
        cout <<text1.potongan_harga << harga_pemotongan << endl;
        cout <<text1.total_bayar << total-harga_pemotongan << endl;
    }
    else if (total >= 150000 ){
        cout << "\tSELAMAT ANDA MENDAPATKAN DISKON 5%" << endl;
        harga_pemotongan = total*diskon [1];
        cout << text1.potongan_harga << harga_pemotongan << endl;
        cout << text1.total_bayar << total-harga_pemotongan << endl;
    }
    cout << endl;
}

void tampilanBawah(){
    cout << "      ============================================================================================================\n";
    cout << endl;
    for (int a=0;a<=4;a++){
        cout << "\t";
    }
    cout << "TERIMAKASIH SUDAH BERBELANJA DITOKO KAMI" << endl;
    cout << endl;
    for (int a=0;a<=5;a++){
        cout << "\t";
    }
    cout << "     HAPPY SHOPPING" << endl;
    cout << endl;
    cout << "      ============================================================================================================\n";
}

int main (){
    tampilanAtas();
    inti ();
    tampilanBawah ();
}
