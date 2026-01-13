🎄 Muñeco de Nieve Navideño Interactivo con ESP32 🎄

Proyecto navideño interactivo que utiliza un sensor PIR para detectar movimiento y reproducir villancicos aleatorios mediante un buzzer, todo integrado dentro de una carcasa impresa en 3D con forma decorativa de muñeco de nieve.

📌 Descripción del proyecto

Este proyecto combina electrónica, programación y diseño 3D para crear un objeto decorativo navideño que interactúa automáticamente con el usuario.
Cuando una persona se acerca al muñeco de nieve, el sensor PIR detecta el movimiento y el sistema reproduce un villancico al azar, creando un efecto sorpresa y un ambiente festivo.

🧰 Materiales necesarios
- Electrónica:
            ESP32
            Sensor de movimiento PIR (HC-SR501 o similar)
            Buzzer pasivo
            Cables Dupont macho-macho
            Cable USB para alimentación del ESP32
- Impresión 3D:
            Carcasa impresa en 3D (caja + tapa) 
            Figura decorativa de muñeco de nieve (STL)
            link(Caja y muñeco juntos): 
- Software
            Visual studio con plugin platformIO
            Drivers del ESP32 instalados
            Código del proyecto (.ino)

🔌 Conexiones eléctricas

            | Componente | Pin ESP32 | Descripción             |
            | ---------- | --------- | ----------------------- |
            | PIR VCC    | 3V3       | Alimentación del sensor |
            | PIR GND    | GND       | Tierra común            |
            | PIR OUT    | GPIO 15   | Señal de movimiento     |
            | Buzzer +   | GPIO 5    | Señal de sonido         |
            | Buzzer –   | GND       | Tierra común            |

💻 Carga del código

1 - Abre Visual studio

2 - Selecciona: Placa: ESP32 Dev Module

3 - Revisa el Puerto que sea correcto

4 - Copia el código del proyecto de este repo y pegalo en el main.cpp

5 - Compila y súbelo a la placa

6 - Abre nueva terminal para comprobar mensajes de estado

7 - Comprueba el funcionamiento correcto

🧩 Montaje del proyecto

1 - Coloca la ESP32 en el fondo de la carcasa.

2 - Fija el sensor PIR alineándolo con el orificio grande frontal que asome un poco por fuera de la caja si es necesario.

3 - Coloca el buzzer detrás del orificio pequeño frontal que asome un poco un poco por fuera de la caja si es necesario.

4 - Organiza los cables para que entre mejor.

5 - Cierra la carcasa con la tapa superior.

6 - Alinea el puerto USB C de la ESP32 a la ranura inferior de la caja.

▶️ Funcionamiento

1 - Conecta el ESP32 a la alimentación.

2 - Espera unos segundos a que el sensor PIR se estabilice.

3 - Al detectar movimiento:Se reproduce un villancico aleatorio.

4 - El sistema entra en espera hasta la siguiente detección.

🎶 Villancicos incluidos

- Jingle Bells
- We Wish You a Merry Christmas
- Silent Night (Noche de Paz)

🔧 Posibles mejoras:

- Añadir LEDs RGB sincronizados con la música
- Incorporar un botón para cambiar modos
- Usar batería externa
- Añadir control de volumen

*IMPORTANTE: 
Recuerda divertirte mientras lo montas.*
