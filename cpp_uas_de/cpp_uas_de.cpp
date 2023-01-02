// UAS_CPP_DE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


float KonversiSuhu(float, char, char);
string KonversiNamaSuhu(char);

int main()
{
    // L A T I H A N   P R A  U A S
    // buatkan fungsi untuk konversi suhu derajat celcius, reamur, farenheit, kelvin   
    // input:   2. masukkan pilihan satuan suhu awal (C, R, F, K)
    //          1. masukkan nilai derajat suhu tersebut
    //          3. masukkan pilihan satuan suhu konversi yang dituju (C, R, F, K)
    //          4. OUTPUT: deskripsi konversi nilai
    // input awal = 10 celcius
    // konversi farenheit = 35 farenheit
    // jadikan 3 inputan tersebut menjadi parameter dari fungsi tersebut
    
    // input suhu
    float suhu;
    cin >> suhu;
    // input derajat awal
    char awal;
    cout << "Ketik c untuk celcius" << endl;
    cout << "Ketik r untuk celcius" << endl;
    cout << "Ketik f untuk celcius" << endl;
    cout << "Ketik k untuk celcius" << endl;
    cout << "pilihan anda-awal: "; cin >> awal;

    // inptu derajat akhir
    char akhir;
    cout << "Ketik c untuk celcius" << endl;
    cout << "Ketik r untuk celcius" << endl;
    cout << "Ketik f untuk celcius" << endl;
    cout << "Ketik k untuk celcius" << endl;
    cout << "pilihan anda-akhir: "; cin >> akhir;

    float HasilKonversi = KonversiSuhu(suhu, awal, akhir);
    
    // deksripsi output
    cout << "suhu yang diinputkan adalah " << suhu << " derajat " << 
        KonversiNamaSuhu(awal) << endl;
    cout << "hasil konversi ke " << akhir << " adalah " << HasilKonversi << " derajat " <<
        akhir << endl;

    // -------------------------------------------------------------------------------
    // 
    // buatkan fungsi untuk mengolah data nilai UAS dari sekian banyak mahasiswa
    // sehingga menghasilkan satu nilai rata-rata
    // input:   1. masukkan berapa banyak mahasiswa
    //          2. masukkan nilai-nilai mahasiswa
    //          3. OUTPUT: deskripsi rata-rata nilai mahasiswa
    // jadikan 2 inputan tersebut menjadi parameter dari fungsi tersebut
    // -------------------------------------------------------------------------------
    // 
    // buatkan aplikasi untuk mengulang pilihan menu utama setelah memilih salah satu menu tersebut
    // - diberikan misalkan 3 pilihan menu
    // - user memilih salah satu menu
    // - setelah menu tersebut digunakan oleh user, di bagian paling akhir terdapat pertanyaan untuk kembali ke menu utama
    // - jika memilih 'Y' maka program akan clear screen, dan menampilkan 3 pilihan menu sebelumnya
    // - jika memilih 'N' maka program end
    // - jika memilih selain 'Y' atau 'N' maka program akan menanyakan kembali untuk kembali ke menu utama

    // testing aja ok ok

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;

    do
    {
        system("cls");
        cout << "Selamat datang di program A" << endl;
        cout << " 1. AA" << endl;
        cout << " 2. AAA" << endl;
        cout << " 3. AAAA" << endl;

        cout << "pilihan anda: ";
        cin >> p1;

        if (p1 == 1) {
            do
            {
                // set nilai p3 ke 0, jika memilih 5
                if (p3 == 5) p3 = 0;

                system("cls");
                cout << "Pencarian Data Warga" << endl;
                cout << "1. AA1" << endl;
                cout << "2. AA2" << endl;
                cout << "3. AA3" << endl;
                cout << "4. AA4" << endl;
                cout << "5. Kembali ke menu sebelumnya" << endl;
                cout << "pilihan anda: ";
                cin >> p2;

                if (p2 == 1) {

                    system("cls");
                    cout << "Cari berdasarkan jalan" << endl;
                    cout << "1. AA1-1" << endl;
                    cout << "2. AA1-2" << endl;
                    cout << "5. Kembali ke menu sebelumnya" << endl;
                    cout << "pilihan anda: ";
                    cin >> p3;
                }
                else if (p2 == 2) { // terbaru p2
                    system("cls");
                    cout << "Cari berdasarkan jalan" << endl;
                    cout << "1. AA2-1" << endl;
                    cout << "2. AA2-2" << endl;
                    cout << "5. Kembali ke menu sebelumnya" << endl;
                    cout << "pilihan anda: ";
                    cin >> p3;
                }
                else if (p2 == 3) {

                }
                else if (p2 == 4) {

                }

            } while (p3 == 5);  // cek perulangan apakah p3 == 5?
        }
        else if (p1 == 2) {

        }
        else if (p1 == 3) {

        }

    } while (p2 == 5);

    // -------------------------------------------------------------------------------
    // 
    // buatkan aplikasi seperti pengisian ulang pulsa di USSD selular
    // PENGISIAN ULANG PULSA
    // 1. BULANAN
    // 2. MINGGUAN
    // 3. HARIAN
    // pilihan anda:
    // misalkan user memilih bulanan, maka selanjutnya akan muncul
    // 1. Paket NETFLIX
    // 2. Paket INTERNET FULL
    // 3. Paket SOSIAL MEDIA
    // 4. KEMBALI KE MENU SEBELUMNYA
    // misalkan user memilih Paket NETFLIX, maka selanjutnya akan muncul
    // 1. 20 GB
    // 2. 10 GB
    // 3. 5 GB
    // 4. KEMBALI KE MENU SEBELUMNYA
    // 
    // DST, setiap pilihan lakukan sebanyak 3 level dan terdapat pilihan kembali ke menu utama
    // 
    //

    return 0;
}

float KonversiSuhu(float _nilai, char _stAwal, char _stAkhir) {

    float keluaran = 0;



    return keluaran;
}

string KonversiNamaSuhu(char _input) {
    string hasil = "";

    if (_input == 'c')
    {
        hasil = "Celcius";
    }
    else if (_input == 'r')
    {
        hasil = "Reamur";
    }
    else if (_input == 'f') hasil = "Farenheit";
    else if (_input == 'k') hasil = "Kelvin";

    return hasil;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
