# Arduino Benchmark
Curioseando la capacidad de mis arduinos quise probar que tanta diferencia en procesamiento tienen entre estos y me dispuse a crear un código simple que pudiese ser corrido en todos ellos y que a su vez me permisiese medir la velocidad de cómputo (ciclos vs tiempo)

Comparto el código y los resultados de mis placas

## Arduino nano 
* Last: 1346269
* N: 1916125
## ESP8266 @160MHz
* Last: 1346269
* N: 1742658
## ESP8266 @80MHz
* Last: 832040
* N: 911840
## ESP32 @240MHz
* Last: 5702887
* N: 7188120
## Arduino pro micro
* Last: 1346269
* N: 2165712

Nota: me abstuve de comparar tarjetas con el mismo chip como el ATmega328P que se repite en muchas placas de arduino, en este caso representado por el Arduino nano.