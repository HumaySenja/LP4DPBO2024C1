class Kendaraan:
    __platnomor = ""
    __merk = ""
    __tahun = 2024
    __warna= ""
    __cckendaraan = 110
    __tangki = 5
    
    def __init__(self, platnomor, merk, tahun, warna, cckendaraan, tangki):
        self.platnomor = platnomor
        self.merk = merk
        self.tahun = tahun
        self.warna = warna
        self.cckendaraan = cckendaraan
        self.tangki = tangki
        
    def get_platnomor(self):
        return self.platnomor

    def set_platnomor(self, platnomor):
        self.platnomor = platnomor

    def get_merk(self):
        return self.merk

    def set_merk(self, merk):
        self.merk = merk

    def get_tahun(self):
        return self.tahun

    def set_tahun(self, tahun):
        self.tahun = tahun

    def get_warna(self):
        return self.warna

    def set_warna(self, warna):
        self.warna = warna
    
    def get_tangki(self):
        return self.tangki

    def set_tangki(self, tangki):
        self.tangki = tangki
    
    def identifikasi(self):
        return f"Merk       :{self.merk}\n- Plat       :{self.platnomor}\n- Tahun      :{self.tahun}\n- Warna      :{self.warna}\n- CC         :{self.cckendaraan}cc\n- Kapasitas  :{self.tangki} liter"