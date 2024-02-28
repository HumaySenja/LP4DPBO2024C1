from Kendaraan import Kendaraan

class Mobil(Kendaraan):
    __jumlahkursi = 4
    __jumlahpintu = 4
    __JenisMobil = ""
    __NamaMobil = ""
    
    def __init__(self, NamaMobil, JenisMobil, jumlahkursi, jumlahpintu, platnomor = "", merk = "", tahun = 2024, warna = "", cckendaraan = 110, tangki = 5):
        super().__init__(platnomor, merk, tahun, warna, cckendaraan, tangki)
        self.NamaMobil = NamaMobil
        self.JenisMobil = JenisMobil
        self.jumlahkursi = jumlahkursi
        self.jumlahpintu = jumlahpintu

    def get_NamaMobil(self):
        return self.NamaMobil

    def set_NamaMobil(self, NamaMobil):
        self.NamaMobil = NamaMobil
    
    def get_JenisMobil(self):
        return self.JenisMobil

    def set_JenisMobil(self, JenisMobil):
        self.JenisMobil = JenisMobil
    
    def get_jumlahkursi(self):
        return self.jumlahkursi

    def set_jumlahkursi(self, jumlahkursi):
        self.jumlahkursi = jumlahkursi

    def get_jumlahpintu(self):
        return self.jumlahpintu

    def set_jumlahpintu(self, jumlahpintu):
        self.jumlahpintu = jumlahpintu
        
    def identifikasi(self):
        identifikasi_kendaraan = super().identifikasi()
        return f"{self.JenisMobil}\n- Nama Mobil :{self.NamaMobil}\n- {identifikasi_kendaraan}\n- Kursi      :{self.jumlahkursi}\n- Pintu      :{self.jumlahpintu}"