#include <iostream>
#include <string>

// Mendefinisikan Class
class Mobil {  
public:
    std::string merk;  
    std::string warna;  
    int tahun;

    void nyalakanMesin() {  
        std::cout << "Mesin mobil " 
                  << merk << " (" 
                  << warna << ", " 
                  << tahun << ") menyala!" 
                  << std::endl;  
    }  
};

int main() {  
    // Object 1
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Object 2
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // Object 3 (Mobil Impian)
    Mobil mobil3;  
    mobil3.merk = "BMW";  
    mobil3.warna = "Biru";  
    mobil3.tahun = 2024;

    // Memanggil method masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin();

    return 0;  
}