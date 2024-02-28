from Kendaraan import Kendaraan
from Motor import Motor
from Mobil import Mobil
from Garasi import Garasi
from ParkingLot import ParkingLot

# Pembuatan objek Motor dan Mobil
motor_saya = Motor("Motor Sport", "CBR", "SU 54 H", "Honda", 2023, "Hitam", 250, 6)
mobil_saya = Mobil("Avanza","Mobil Sedan",5, 4, "LP 4 INI", "Toyota", 2020, "Putih", 1500, 25)

# Pembuatan objek Garasi dan penambahan kendaraan ke dalamnya
list_vehicle_garasi = [motor_saya, mobil_saya]
garasi_saya = Garasi("Garasi Rumah", 50, list_vehicle_garasi)

# Menambahkan kendaraan baru ke dalam garasi
garasi_saya.tambah_kendaraan(Mobil("HRV","Mobil SUV",5, 4, "S 4 D", "Honda", 2022, "Hitam", 1800, 30))

# Menampilkan isi garasi
garasi_saya.tampilkan_isi_garasi()

LahanParkir = ParkingLot(100, 25)
LahanParkir.TampilkanParkingLot()