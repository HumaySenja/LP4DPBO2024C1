from Kendaraan import Kendaraan

class Motor(Kendaraan):
    __JenisMotor = ""
    __NamaMotor = ""
    def __init__(self, JenisMotor, NamaMotor, platnomor = "", merk = "", tahun = 2024, warna = "", cckendaraan = 110, tangki = 5):
        super().__init__(platnomor, merk, tahun, warna, cckendaraan, tangki)
        self.JenisMotor = JenisMotor
        self.NamaMotor = NamaMotor
    
    def get_JenisMotor(self):
        return self.JenisMotor

    def set_JenisMotor(self, JenisMotor):
        self.JenisMotor = JenisMotor
        
    def get_NamaMotor(self):
        return self.NamaMotor

    def set_NamaMotor(self, NamaMotor):
        self.NamaMotor = NamaMotor
    
    def identifikasi(self):
        identifikasi_kendaraan = super().identifikasi()
        return f"{self.JenisMotor}\n- Nama Motor :{self.NamaMotor}\n- {identifikasi_kendaraan}"