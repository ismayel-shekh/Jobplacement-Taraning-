class Animal :
    
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(self.name, "can eat")


    def drink(self, y):
        print(self.name, y)


dog = Animal("hunty")

dog.drink(5)