#include <iostream>
#include <vector>
#include "Kendaraan.cpp"
#include "Garasi.cpp"
#include "Mobil.cpp"
#include "Motor.cpp"
#include "ParkingLot.cpp"
// Include the classes Motor, Mobil, Garasi, and ParkingLot as defined previously

int main() {
    // Create Motor and Mobil objects
    Motor* motor_saya = new Motor("Motor Sport", "CBR", "SU 54 H", "Honda", 2023, "Hitam", 250, 6);
    Mobil* mobil_saya = new Mobil("Avanza", "Mobil Sedan", 5, 4, "LP 4 INI", "Toyota", 2020, "Putih", 1500, 25);

    // Create a list of vehicles and a Garasi object
    std::vector<Kendaraan*> list_vehicle_garasi = {motor_saya, mobil_saya};
    Garasi* garasi_saya = new Garasi("Garasi Rumah", 50, list_vehicle_garasi);

    // Add a new vehicle to the garage
    garasi_saya->tambah_kendaraan(new Mobil("HRV", "Mobil SUV", 5, 4, "S 4 D", "Honda", 2022, "Hitam", 1800, 30));

    // Display the contents of the garage
    garasi_saya->tampilkan_isi_garasi();

    // Create a ParkingLot object
    ParkingLot* lahan_parkir = new ParkingLot(100, 25);

    // Display information about the parking lot
    lahan_parkir->TampilkanParkingLot();

    // Deallocate memory for the dynamically allocated objects
    delete garasi_saya;
    delete motor_saya;
    delete mobil_saya;
    delete lahan_parkir;

    return 0;
}
