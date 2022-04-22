# TEST PLAN AND OUTPUT


| TEST ID | Description | Expected I/P | Expected O/P | Actual output | 
|--|--|--|--|--|
| T01 |Sensing distance|bounced signal obtained in echo pin|Correct distance obtained from ultrasonic sensor|Correct distance obtained (**SUCCESS**) | 
| T02 |ATmega328p calculating distance|input from sensor|display distance in LCD|distance displayed (**SUCCESS**)| 
| T03 |Working of LCD and BUZZER |distance from ATmega328p |Turns ON if distance is less than 6cm |Turned On (**SUCCESS**) |
| T04 | USART Communication Protocol  | distance from Atmega 328p|distance is displayed in serial monitor |distance displayed (**SUCCESS**) |
