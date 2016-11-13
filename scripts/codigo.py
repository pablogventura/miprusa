import time
import serial

# configure the serial connections (the parameters differs on the device you are connecting to)
ser = serial.Serial(
    port='/dev/ttyACM0',
    baudrate=250000
)

def enviar(comando):
    ser.flush()
    print(comando)
    comando+="\r\n"
    ser.write(comando.encode())
    print(ser.readline())

enviar("")
enviar("M80")
time.sleep(2)
enviar("G28 Y0")
sigue=True
while(sigue):
    try:
        enviar("G0 Y200")
        time.sleep(7)
        enviar("G0 Y0")
        time.sleep(7)
    except KeyboardInterrupt:
        sigue=False
    
enviar("M81")

ser.close()

#G0 Y200; move printed piece to user
#M84 ;steppers off
