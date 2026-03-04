#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;

public:
    RekeningBank(double saldoAwal) {
        saldo = saldoAwal;
    }

    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setor berhasil. Saldo sekarang: " << saldo << endl;
    }

    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan Gagal" << endl;
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Sisa saldo: " << saldo << endl;
        }
    }
};

int main() {
    double saldoAwal, jumlahSetor, jumlahTarik;

    cout << "Masukkan saldo awal: ";
    cin >> saldoAwal;

    RekeningBank rekening1(saldoAwal);

    cout << "Masukkan uang ke dalam bank: ";
    cin >> jumlahSetor;
    rekening1.setor(jumlahSetor);

    cout << "Masukkan jumlah uang yang ingin ditarik: ";
    cin >> jumlahTarik;
    rekening1.tarik(jumlahTarik);

    return 0;
}