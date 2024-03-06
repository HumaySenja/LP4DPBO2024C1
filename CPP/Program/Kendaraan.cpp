#include <iostream>
#include <string>

#pragma once

class Kendaraan {
private:
    std::string platnomor;
    std::string merk;
    int tahun;
    std::string warna;
    int cckendaraan;
    int tangki;

public:
    Kendaraan(std::string platnomor, std::string merk, int tahun, std::string warna, int cckendaraan, int tangki) 
        : platnomor(platnomor), merk(merk), tahun(tahun), warna(warna), cckendaraan(cckendaraan), tangki(tangki) {}

    std::string get_platnomor() const {
        return platnomor;
    }

    void set_platnomor(const std::string& platnomor) {
        this->platnomor = platnomor;
    }

    std::string get_merk() const {
        return merk;
    }

    void set_merk(const std::string& merk) {
        this->merk = merk;
    }

    int get_tahun() const {
        return tahun;
    }

    void set_tahun(int tahun) {
        this->tahun = tahun;
    }

    std::string get_warna() const {
        return warna;
    }

    void set_warna(const std::string& warna) {
        this->warna = warna;
    }

    int get_tangki() const {
        return tangki;
    }

    void set_tangki(int tangki) {
        this->tangki = tangki;
    }

    virtual void identifikasi() const {
        std::cout << "- Merk       : " << merk << "\n"
                  << "- Plat       : " << platnomor << "\n"
                  << "- Tahun      : " << tahun << "\n"
                  << "- Warna      : " << warna << "\n"
                  << "- CC         : " << cckendaraan << "cc\n"
                  << "- Kapasitas  : " << tangki << " liter" << std::endl;
    }
};