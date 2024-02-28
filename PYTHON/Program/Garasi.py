from Kendaraan import Kendaraan
class Garasi:
    __NamaGarasi = ""
    __LuasGarasi = 0
    __ListVehicle = []
    
    def __init__(self, NamaGarasi, LuasGarasi, ListVehicle):
        self.NamaGarasi = NamaGarasi
        self.LuasGarasi = LuasGarasi
        self.ListVehicle = ListVehicle
        
    def tambah_kendaraan(self, kendaraan):
        self.ListVehicle.append(kendaraan)

    def tampilkan_isi_garasi(self):
        print(f"Nama Garasi : {self.NamaGarasi}")
        print(f"Luas : {self.LuasGarasi} meter kubik")
        print("Isi Garasi:")
        for i, kendaraan in enumerate(self.ListVehicle, 1):
            print(f"{i}.{kendaraan.identifikasi()}\n")