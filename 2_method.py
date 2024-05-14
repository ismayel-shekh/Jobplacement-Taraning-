class A:
    pass
def display(self):
    print("Ismayel ")


    print("nagin")
A.dec = display
A.value = 5

obj = A()
obj.dec()
print(A.__dict__)