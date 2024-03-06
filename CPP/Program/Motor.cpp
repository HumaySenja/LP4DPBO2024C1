#include <iostream>
#include <string>
#include "Kendaraan.cpp"

#pragma once

class Motor : public Kendaraan {
private:
    std::string JenisMotor;
    std::string NamaMotor;

public:
    Motor(std::string JenisMotor, std::string NamaMotor,
          std::string platnomor = "", std::string merk = "", int tahun = 2024, std::string warna = "", int cckendaraan = 110, int tangki = 5)
        : Kendaraan(platnomor, merk, tahun, warna, cckendaraan, tangki), JenisMotor(JenisMotor), NamaMotor(NamaMotor) {}

    std::string get_JenisMotor() const {
        return JenisMotor;
    }

    void set_JenisMotor(const std::string& JenisMotor) {
        this->JenisMotor = JenisMotor;
    }

    std::string get_NamaMotor() const {
        return NamaMotor;
    }

    void set_NamaMotor(const std::string& NamaMotor) {
        this->NamaMotor = NamaMotor;
    }

    void identifikasi() const override{
    std::cout << JenisMotor << "\n- Nama Motor : " << NamaMotor << "\n";
    Kendaraan::identifikasi();  
}
};
