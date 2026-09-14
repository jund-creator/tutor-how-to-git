#include <iostream>
using namespace std;

int main()
{
    int totalBelanja;

    cout << "==== kalkulator kasir toko buku ====" << endl;
    cout << "Masukan total belanjaan anda (Rp): ";
    cin >> totalBelanja;

    cout << "==== Ringkasan pembayaran ====" << endl;

    if (totalBelanja < 100000)
    {
        cout << "Total belanja anda : Rp " << totalBelanja << endl;
    }
    else if (totalBelanja >= 100000 && totalBelanja <= 299999)
    {
        float diskon = totalBelanja * 0.1;
        cout << "diskon(10%)        : Rp " << diskon << endl;
        cout << "Total belanja anda : Rp " << totalBelanja - diskon << endl;
    }
    else
    {
        float diskon = totalBelanja * 0.2;
        cout << "diskon(20%):       : Rp " << diskon << endl;
        cout << "Total belanja anda : Rp " << totalBelanja - diskon << endl;
    }

    return 0;
}
