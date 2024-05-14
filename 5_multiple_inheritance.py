class vehical:
    def __init__(self, name, engin) :
        self.name = name
        self.engin = engin

    def topgirar(self, giar):
        print("vehical top giar", giar)
        
class Car:
    def __init__(self, model):
        self.model = model

    def modelmycar(self):
        print("my car model name ", self.model)

class privatcar(vehical, Car):
    def __init__(self, name, engin, model):
        vehical.__init__(self, name, engin)
        Car.__init__(self, model)

bmw = privatcar("banga cura" , 5, "ac13")

bmw.modelmycar()
bmw.topgirar(20)