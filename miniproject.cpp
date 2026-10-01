    #include <iostream>
    using namespace std;

    // FUNGSI BUATAN SENDIRI (Function)
    float hitungRataRata(int arr[], int n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i]; // Perulangan dalam fungsi
        }
        return (float)total / n;
    }

    int cariNilaiMaksimum(int arr[], int n) {
        int maks = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > maks) { // Percabangan di dalam fungsi
                maks = arr[i];
            }
        }
        return maks;
    }

    int main() {
        // Deklarasi Variabel & Data Deret (Array)
        const int MAX_SIZE = 100;
        int deretNilai[MAX_SIZE];
        int jumlahData;

        //INPUT OUTPUT & PERULANGAN
        cout << "========================================\n";
        cout << "   PROGRAM ANALISIS DERET NILAI ANGKA   \n";
        cout << "========================== ==============\n";
        cout << "Masukkan jumlah data deret (maks 100): ";
        cin >> jumlahData; // Input

        cout << "\n--- Masukkan Elemen Deret ---\n";
        for (int i = 0; i < jumlahData; i++) {
            cout << "Data ke-" << i + 1 << ": ";
            cin >> deretNilai[i]; // Input ke dalam Array dengan perulangan For
        }

        //PEMANGGILAN FUNGSI & OUTPUT DATA
        float rataRata = hitungRataRata(deretNilai, jumlahData);
        int nilaiMaks = cariNilaiMaksimum(deretNilai, jumlahData);

        cout << "\n========================================\n";
        cout << "             HASIL ANALISIS             \n";
        cout << "========================================\n";
        cout << "Daftar Deret Angka yang Dimasukkan: ";
        for (int i = 0; i < jumlahData; i++) {
            cout << deretNilai[i] << " "; // Menampilkan isi Array
        }
        cout << endl;

        cout << "Nilai Terbesar  : " << nilaiMaks << endl;
        cout << "Rata-rata Deret : " << rataRata << endl;

        // PERCABANGAN (If-Else)
        cout << "Status Kategori : ";
        if (rataRata >= 75) {
            cout << "Kategori A (Sangat Baik / Lulus)" << endl;
        } else if (rataRata >= 60) {
            cout << "Kategori B (Baik / Cukup)" << endl;
        } else {
            cout << "Kategori C (Perlu Peningkatan)" << endl;
        }
        cout << "========================================\n";

        return 0;
    }