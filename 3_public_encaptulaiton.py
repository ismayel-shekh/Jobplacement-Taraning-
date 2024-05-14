class A:
    value = 0
    def __init__(self,value) -> None:
        self.value = value

    def display(self):
        print(self.value)



obj = A(5)

obj.display()

obj.value = 15
obj.display()

class B:
    element = 0
    def __init__(self, element) -> None:
        self.element = element + 4
    def display(self):
        print(self.element -2)

king = B(20)
king.display()
king.element = 1000
king.display()