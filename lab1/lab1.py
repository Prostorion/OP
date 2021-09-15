import math

def find_katet(hip, kat):
    second_katet = math.sqrt(hip*hip - kat*kat)
    return repr(second_katet)

print('Інший катет: ' + find_katet(float(input('Введіть гіпотенузу: ')), float(input('Введіть катет: ')) ))