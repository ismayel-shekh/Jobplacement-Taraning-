class Food:
    def start(self, name):
        print("food Name: ", name)

class Rice(Food):
    def __init__(self, name):
        self.name = name
        super().__init__()

class Mango(Rice):
    def __init__(self, name):
        super().__init__(name)

        print("habi Tasty mango name is ", name)

langora = Mango("langora")
langora.start("rupali")
