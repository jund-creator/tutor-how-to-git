#include <iostream>
using namespace std;

int main()
{
    int airMineral = 4000;
    int tehBotol = 6000;
    int kopiSusu = 10000;
    int pilihan;
    int uang;
    int kembalian;
    int kembalian5K;
    int kembalian1k;

    cout << "==== VENDING MECHINE AUTOMAT ====" << endl;
    cout << "Pilihan minuman: " << endl;
    cout << "1. Air Mineral : Rp " << airMineral << endl;
    cout << "2. Teh Botol : Rp " << tehBotol << endl;
    cout << "3. Kopi Susu : Rp " << kopiSusu << endl;

    cout << "Pilih kode minuman (1-3): ";
    cin >> pilihan;

    cout << "Masukan uang anda : Rp ";
    cin >> uang;
    cout << "====== DETAIL TRANSAKSI ======" << endl;

    if (pilihan < 4)
    {

        switch (pilihan)
        {
        case 1:
            if (uang < airMineral)
            {
                cout << "Uang anda tidak cukup untuk membeli Air Mineral." << endl;
            }
            else
            {
                cout << "Anda memilih Air Mineral" << endl;
                cout << "Harga: Rp " << airMineral << endl;
                kembalian = uang - airMineral;
                kembalian5K = kembalian / 5000;
                kembalian1k = (kembalian % 5000) / 1000;
                cout << "Kembalian anda: Rp " << kembalian << endl;
                cout << "Kembalian 5 ribu: " << kembalian5K << " lembar" << endl;
                cout << "Kembalian 1 ribu: " << kembalian1k << " lembar" << endl;
            }
            break;
        case 2:
            cout << "Anda memilih Teh Botol" << endl;
            cout << "Harga: Rp " << tehBotol << endl;
            if (uang < tehBotol)
            {
                cout << "Uang anda tidak cukup untuk membeli Teh Botol." << endl;
            }
            else
            {
                kembalian = uang - tehBotol;
                kembalian5K = kembalian / 5000;
                kembalian1k = (kembalian % 5000) / 1000;
                cout << "Kembalian anda: Rp " << kembalian << endl;
                cout << "Kembalian 5 ribu: " << kembalian5K << " lembar" << endl;
                cout << "Kembalian 1 ribu: " << kembalian1k << " lembar" << endl;
            }
            break;
        case 3:
            cout << "Anda memilih Kopi Susu" << endl;
            cout << "Harga: Rp " << kopiSusu << endl;
            break;

        default:
            break;
        }
    }
    else
    {
        cout << "Pilihan tidak valid. Silakan pilih kode minuman antara 1 hingga 3." << endl;
    }

    return 0;
}