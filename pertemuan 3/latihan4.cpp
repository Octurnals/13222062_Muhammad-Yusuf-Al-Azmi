#include <iostream>

class Sensor {  
private:  
    int id;   
    double nilai;

public:  
    // Constructor TANPA inisialisasi nilai
    Sensor(int id_sensor) {   
        id = id_sensor;   
    }  
      
    void rekam(double data) {   
        nilai = data;   
    }  
      
    void status() {   
        std::cout << "ID: " << id 
                  << " | Nilai: " << nilai 
                  << std::endl;   
    }  
};

int main() {  
    Sensor jaringan[3] = { Sensor(101), Sensor(102), Sensor(103) };

    // Loop rekam DIHAPUS

    // Output hasil langsung
    for (int i = 0; i < 3; i++) {  
        jaringan[i].status();  
    }  
      
    return 0;  
}