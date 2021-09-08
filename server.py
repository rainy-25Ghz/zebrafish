# Importing Libraries
import serial
import time
arduino = serial.Serial(port='COM4', baudrate=115200, timeout=.1)
def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    time.sleep(0.05)
    data = arduino.readline()
    return data
while True:
    num = input("Enter a char: ") # Taking input from user
    value = write_read(num)
    print(value) # printing the value
# port_list = list(serial.tools.list_ports.comports())
# print(port_list)
# if len(port_list) == 0:
#    print('nooo')
# else:
#     for i in range(0,len(port_list)):
#         print(port_list[i])
# COM4 - USB-SERIAL CH340 (COM4)
