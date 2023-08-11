# class Details:
#     name = "Wasim"
#     age = 23
#
#     def desc(self):
#         print("My name is", self.name, "and I'm", self.age, "years old.")
#
# obj1 = Details()
# obj1.desc()

class Mobiledetails:
    def __init__(self, name, ram):
        self.name = name
        self.ram = ram

    def getRam(self):
        print(self.ram)


obj1 = Mobiledetails("Redmi 8A Dual", "8GB")
print(obj1.name, obj1.ram)

mob1 = Mobiledetails("OnePlus", "12GB")
print(mob1.name, mob1.ram)

mob1.getRam()