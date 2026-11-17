import math

def forwardkinematic(l1,l2,theda1,theda2):
    # l1 = 10
    # l2 = 12

    # theda1 = 30
    # theda2 = 45

    tr1 = math.radians(theda1)
    tr2 = math.radians(theda2)

    x = l1*math.cos(tr1) + l2*math.cos(tr1+tr2)
    y = l1*math.sin(tr1) + l2*math.sin(tr2+tr2)

    orientation = theda1+theda2

    print(f'x = {x:.2f} cm')
    print(f'y = {y:.2f} cm')
    print(f'orientation = {orientation:.2f} degree')


def main():
    l1 = float(input("Length of Link 1 in cm :"))
    l2 = float(input("Length of Link 2 in cm :"))
    theda1 = float(input("Degree of Link 1 :"))
    theda2 = float(input("Degree of Link 2 :"))

    forwardkinematic(l1,l2,theda1,theda2)

if __name__ == '__main__':
    main()
