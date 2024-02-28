class ParkingLot:
    __Kapasitas = 0
    __JumlahNow = 0
    
    def __init__(self, Kapasitas, JumlahNow):
        self.Kapasitas = Kapasitas
        self.JumlahNow = JumlahNow
        
    def get_Kapasitas(self):
        return self.Kapasitas

    def set_Kapasitas(self, Kapasitas):
        self.Kapasitas = Kapasitas
        
    def get_JumlahNow(self):
        return self.JumlahNow

    def set_JumlahNow(self, JumlahNow):
        self.JumlahNow = JumlahNow
        
    def TampilkanParkingLot(self):
        print("Parking Lot")
        print(f"Kapasitas       : {self.Kapasitas} Kendaraan")
        print(f"Jumlah Sekarang : {self.JumlahNow} Kendaraan")
    