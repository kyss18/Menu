import math
def volumepolygon():
    side = int(input("\nEnter column height: "))
    leng = int(input("Enter side length: "))
    hight = int(input("Enter num sides: "))
    area = hight * (leng * leng) * ((1 / math.tan(math.pi /hight)) / 4)
    print(f"The area of a {hight}-sided polygon with side {leng} is {float(area * side):.2f}")

def volumecircle():
    a = int(input("\nEnter column height: "))
    c = int(input("Enter radius:  "))
    volume = math.pi * (c ** 2) * a
    print(f"The volume of a cylinder with radius {c} and height {a} is {volume:.2f}")

def volumetriangle():
    a = int(input("\nEnter column height: "))
    b = int(input("Enter triangle base: "))
    c = int(input("Enter triangle height: "))
    volume = (a * b * c) / 2
    print(f"The volume of a triangle column with sides {b},{c} and height {a} is {volume:.2f}")

def areaofpolygon():
    side = int(input("\nEnter side length: "))
    leng = int(input("Enter num sides: "))
    area = leng * (side * side) * ((1 / math.tan(math.pi / leng)) / 4)
    print(f"The area of a {side}-sided polygon with side {leng} is {area:.2f}")

def areaofcircle():
    r = int(input("\nEnter radius: "))
    area = math.pi * (r ** 2)
    print(f"The area of a circle with radius {r} is {area:.2f}")

def areaoftriangle():
    a = int(input("\nEnter base: "))
    b = int(input("Enter height: "))
    area = (a * b) / 2
    print(f"The area of a triangle with base {a} and height {b} is {area:.2f}\n")

def menu():
    n = ""
    while True:
        print("\n--------------------------------------------------")
        print("\tArea Calculator")
        print("--------------------------------------------------")
        print("1. Triangle")
        print("2. Circle")
        print("3. Regular Polygon")
        print("C. Change to Volume Mode")
        print("X. EXIT")
        print("--------------------------------------------------")
        n = input("Make selection: ").lower()
        
        if n == '1':
            areaoftriangle()
        elif n == '2':
            areaofcircle()
        elif n == '3':
            areaofpolygon()
        elif n == 'c':
            print("Switching to Volume mode\n")
            volumemenu()
        elif n == 'x':
            print("Exiting....")
            break

def volumemenu():
    n = ""
    while True:
        print("\n--------------------------------------------------")
        print("\tCylinder Volume Calculator")
        print("--------------------------------------------------")
        print("1. Triangle")
        print("2. Circle")
        print("3. Regular Polygon")
        print("C. Change to Area Mode")
        print("X. EXIT")
        print("--------------------------------------------------")
        n = input("Make selection: ").lower()
        if n == '1':
            volumetriangle()
        elif n == '2':
            volumecircle()
        elif n == '3':
            volumepolygon()
        elif n == 'c':
            print("Switching to Area mode\n")
            menu()
        elif n == 'x':
            print("Exiting....")
            break
menu()