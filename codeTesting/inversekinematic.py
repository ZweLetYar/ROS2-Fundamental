import math

def inversekinematic(l1,l2,x,y):
    cos_theda2 = (x**2 + y**2 - l1**2 - l2**2) / (2*l1*l2)

    if abs(cos_theda2) > 1 :
        print("Target Unreachable!")
        return
    else:
        theda2 = math.acos(cos_theda2)
        theda1 = math.atan2(x,y) - math.atan2(l2*math.sin(theda2) , l1+l2*math.cos(theda2))
        theda1_degree = math.degrees(theda1)
        theda2_degree = math.degrees(theda2)

    print(f'Degree of link 1 = {theda1_degree}')
    print(f'Degree of link 2 = {theda2_degree}')


def main():
    l1 = float(input("Length of Link 1 in cm : "))
    l2 = float(input("Length of Link 2 in cm : "))
    x  = float(input("Target position x : "))
    y  = float(input("Target position y : "))
    inversekinematic(l1,l2,x,y)

if __name__ == '__main__':
    main()

    