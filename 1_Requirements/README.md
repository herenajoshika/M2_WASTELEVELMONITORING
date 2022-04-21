# Requirements

## Features

-   The idea is simple and is driven by the fact that dustbins require very frequent cleaning, which is not always possible. This leads to unhealthy environment and spread of diseases. The aim is to get the dustbin cleaned timely using alert services.
   
-   The project is titled as **WASTE LEVEL MONITORING** and developed using C language.
   
-   Atmega328 is the microcontroller used in this system.
   
-   Atmega328 is connected with LCD display to show the status of the dustbin and the distance filled,Ultrasonic sensor which helps in finding the distance filled by sending a signal through trigpin and receiving through echo pin and by using the time taken by the echo pin to recieve the signal the distance is calculated,Buzzer and LED is connected which acts as alert signals to indicate when the dustbin is full and the distance is also send through USART which is a communication protocol which could be seen in serial monitor.
   
-   In my Project the dustbin gives alert signal when the dustbin have distance to fill the wastes is about less than 6cm.

### Advantages
-  Cost efficient
-  Simple circuit
-  Simple program
-  Advantageous to environment

## Research

   Several models on Waste level Indicator are researched and this application is created on basis of the research
 
 Few research models are :
  
![recyclobin-ultra-eye-smart-sensors-intelligent-waste-level-fill-monitoring--500x500](https://user-images.githubusercontent.com/101052348/164477356-d2d1d48c-2489-49fa-8889-afdc4804aa94.png)


## Defining the System

![flowchart](https://user-images.githubusercontent.com/101052348/164506670-6e194db8-8eef-4a00-8b92-247827bca180.png)

## SWOT Analysis

![SWOT_ANALYSIS](https://user-images.githubusercontent.com/101052348/164480330-974dc9b6-7d0d-4453-b389-1654fe1572a8.png)

# 4 W's and 1 H

## Who
Make the public aware of Whether the dustbin is full and to use it accordingly.

## What
It's an Embedded system which helps in finding the distance of trash filled.

## When
Distance is measured continuously and the data is displayed and sent.

## Where
It can be incorporated in both domestic and public dustbins for indication of trash level.

## How
In my Project the dustbin gives alert signal when the dustbin have distance to fill the wastes is about less than 6cm.Atmega328 is the microcontroller used in this system and the language used as a software in this embedded system is C language further the Atmega328 is connected with LCD display to show the status of the dustbin and the distance filled,Ultrasonic sensor which helps in finding the distance filled by sending a signal through trigpin and receiving through echo pin and by using the time taken by the echo pin to recieve the signal the distance is calculated,Buzzer and LED is connected which acts as alert signals to indicate when the dustbin is full and the distance is also send through USART which is a communication protocol which could be seen in serial monitor.

# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR1 | Ultrasonic Sensor  | Implemented |
| HR2 | Atmega328 | Implemented |
| HR3 | LCD Display|  Implemented |
| HR4 | USART |  Implemented |
| HR5 | Light Indicator |  Implemented |
| HR6 | Voice Indicator | Implemented |
| HR7 | GPS or IOT based data transmission | Future |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR1 |Senses distance of the trash filled in dustbin | HR01| Implemented |
| LR2 |The program hex file is uploaded in the simulation and ran successfully | HR02| Implemented |
 LR3 | The Distance data is displayed in the LCD  | HR03| Implemented |
| LR4 | The distances measured will be sent to USART which could be seen through SERIAL MONITOR | HR04| Implemented |
| LR5 |The light indicator shows its output when the distance goes below 6cm | HR05| Implemented |
| LR6 |The voice indicator shows its output when the distance goes below 6cm | HR06| Implemented |
| LR7 |The distance can be sent through cloud and save there or also can be send to appropriate officials through GPS | HR07| Future |

## BEST METHOD FOLLOWED

C programming is one of the less complex language through which this application is done.In my Project the dustbin gives alert signal when the dustbin have distance to fill the wastes is about less than 6cm.The idea is simple and is driven by the fact that dustbins require very frequent cleaning, which is not always possible. This leads to unhealthy environment and spread of diseases. The aim is to get the dustbin cleaned timely using alert services. 





