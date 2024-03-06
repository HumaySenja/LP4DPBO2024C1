#include <iostream>
#include <string>
#include "Kendaraan.cpp"

#pragma once

class Mobil : public Kendaraan {
private:
    std::string JenisMobil;
    std::string NamaMobil;
    int jumlahkursi;
    int jumlahpintu;

public:
    Mobil(std::string NamaMobil, std::string JenisMobil, int jumlahkursi, int jumlahpintu,
          std::string platnomor = "", std::string merk = "", int tahun = 2024, std::string warna = "", int cckendaraan = 110, int tangki = 5) 
        : Kendaraan(platnomor, merk, tahun, warna, cckendaraan, tangki), NamaMobil(NamaMobil), JenisMobil(JenisMobil),
          jumlahkursi(jumlahkursi), jumlahpintu(jumlahpintu) {}

    std::string get_NamaMobil() const {
        return NamaMobil;
    }

    void set_NamaMobil(const std::string& NamaMobil) {
        this->NamaMobil = NamaMobil;
    }

    std::string get_JenisMobil() const {
        return JenisMobil;
    }

    void set_JenisMobil(const std::string& JenisMobil) {
        this->JenisMobil = JenisMobil;
    }

    int get_jumlahkursi() const {
        return jumlahkursi;
    }

    void set_jumlahkursi(int jumlahkursi) {
        this->jumlahkursi = jumlahkursi;
    }

    int get_jumlahpintu() const {
        return jumlahpintu;
    }

    void set_jumlahpintu(int jumlahpintu) {
        this->jumlahpintu = jumlahpintu;
    }

    void identifikasi() const override{
    std::cout << JenisMobil << "\n- Nama Mobil : " << NamaMobil << "\n";
    Kendaraan::identifikasi();
    std::cout << "- Kursi      : " << jumlahkursi << "\n- Pintu      : " << jumlahpintu << std::endl;
}

};