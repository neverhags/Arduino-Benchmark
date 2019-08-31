# Arduino Benchmark
Curioseando la capacidad de mis arduinos quise probar que tanta diferencia en procesamiento tienen entre estos y me dispuse a crear un código simple que pudiese ser corrido en todos ellos y que a su vez me permisiese medir la velocidad de cómputo (ciclos vs tiempo)

Comparto el código y los resultados de mis placas
# Arduino
## Arduino nano (Atmega328P)
* Last: 1346269
* N: 1916125
## Arduino pro micro (Atmega32U4)
* Last: 1346269
* N: 2165712

# ESP8266
## ESP8266 @160MHz
* Last: 1346269
* N: 1742658
## ESP8266 @80MHz
* Last: 832040
* N: 911840
  
# ESP32
## ESP32 @240MHz
* Last: 5702887
* N: 7188120
## ESP32 @160MHz
* Last: 3524578
* N: 4935653
## ESP8266 @80MHz
* Last: 2178309
* N: 2494168
## ESP8266 @40MHz (x-tal)
* Last: 832040
* N: 1193193



Nota: me abstuve de comparar tarjetas con el mismo chip como el ATmega328P que se repite en muchas placas de arduino, en este caso representado por el Arduino nano.