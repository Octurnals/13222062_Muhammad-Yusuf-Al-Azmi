#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream fileBaca("data_sensor.txt");

    std::string baris;

    std::cout << "Isi file:\n";

    while (std::getline(fileBaca, baris)) {
        std::cout << baris << std::endl;
    }

    fileBaca.close();

    return 0;
}