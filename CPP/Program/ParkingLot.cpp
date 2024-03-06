#include <iostream>

#pragma once

class ParkingLot {
private:
    int Kapasitas;
    int JumlahNow;

public:
    ParkingLot(int Kapasitas, int JumlahNow) : Kapasitas(Kapasitas), JumlahNow(JumlahNow) {}

    int get_Kapasitas() const {
        return Kapasitas;
    }

    void set_Kapasitas(int Kapasitas) {
        this->Kapasitas = Kapasitas;
    }

    int get_JumlahNow() const {
        return JumlahNow;
    }

    void set_JumlahNow(int JumlahNow) {
        this->JumlahNow = JumlahNow;
    }

    void TampilkanParkingLot() const {
        std::cout << "Parking Lot" << std::endl;
        std::cout << "Kapasitas       : " << Kapasitas << " Kendaraan" << std::endl;
        std::cout << "Jumlah Sekarang : " << JumlahNow << " Kendaraan" << std::endl;
    }
};