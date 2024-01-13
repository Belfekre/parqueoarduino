import serial 
import requests
arduino=serial.Serial('COM3',9600)

#configuracion de la URL
base_url = 'http://parqueoarduino.test/'
url_controller = base_url+'registra_datos'


while True:
    if (arduino.inWaiting()>0):
            medida=arduino.readline()
            datos=medida
            print (datos)
            #ENVIAR AL SERVIDOR WEB
            data={
                'datos':datos,
            }
            response = requests.post(url_controller, data=data)
            if response.status_code == 200:
                print("Envio correcto")
            else:
                print("Error al enviar: ", response.status_code)

"""
#SIMULACION DATOS
datos=[
    "LIBRE1 23\r\n",#0
    "OCUPADO1 0\r\n",#1
    "LIBRE2 23\r\n",#2
    "OCUPADO2 0\r\n",#3
    "LIBRE3 23\r\n",#4
    "OCUPADO3 0\r\n"#5
    ]
i=4
#ENVIAR AL SERVIDOR WEB
print (datos[i])
data={
    'datos':datos[i],
}
response = requests.post(url_controller, data=data)
if response.status_code == 200:
    print("Envio correcto")
else:
    print("Error al enviar: ", response.status_code)
"""