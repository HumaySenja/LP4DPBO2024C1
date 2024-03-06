#include <iostream>
#include <string>
#include <vector>
#include "Kendaraan.cpp"
#include "Mobil.cpp"
#include "Motor.cpp"

#pragma once

class Garasi {
private:
    std::string NamaGarasi;
    double LuasGarasi;
    std::vector<Kendaraan*> ListVehicle;

public:
    Garasi(std::string NamaGarasi, double LuasGarasi, const std::vector<Kendaraan*>& ListVehicle)
        : NamaGarasi(NamaGarasi), LuasGarasi(LuasGarasi), ListVehicle(ListVehicle) {}

    void tambah_kendaraan(Kendaraan* kendaraan) {
        ListVehicle.push_back(kendaraan);
    }

    void tampilkan_isi_garasi() const {
        std::cout << "Nama Garasi : " << NamaGarasi << std::endl;
        std::cout << "Luas : " << LuasGarasi << " meter kubik" << std::endl;
        std::cout << "Isi Garasi:" << std::endl;

        for (size_t i = 0; i < ListVehicle.size(); i++) {
        std::cout << i + 1 << ". ";
        if (Mobil* mobilPtr = dynamic_cast<Mobil*>(ListVehicle[i])) {
            mobilPtr->identifikasi();
        }
        
        else if (Motor* motorPtr = dynamic_cast<Motor*>(ListVehicle[i])) {
            motorPtr->identifikasi();
        }
        std::cout << std::endl;
        }
    }
    
    ~Garasi() {
        for (Kendaraan* kendaraan : ListVehicle) {
            delete kendaraan;
        }
    }
};
