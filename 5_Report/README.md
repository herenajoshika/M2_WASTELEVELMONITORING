# WASTE LEVEL MONITORING

## Abstract

The idea is simple and is driven by the fact that dustbins require very frequent cleaning, which is not always possible. This leads to unhealthy environment and spread of diseases. The aim is to get the dustbin cleaned timely using alert services. The term waste management usually relates to all kinds of waste, whether generated during the extraction of raw materials, the processing of raw materials into final products, the consumption of final products, or other human activities, including municipal, agricultural, and social like health care etc. There needs to be system that gives prior information of the filling of the bin that alerts the municipality so that they can clean the bin on time and safeguard the environment. To avoid all such situations we intend to propose a solution for this problem WASTE LEVEL MONITORING, which will inform that the Dustbin is full by the use light and Voice indication using buzzer so that no one will fill the waste further untill its cleaned and also the distance is sent through.In my Project the dustbin gives alert signal when the dustbin have distance to fill the wastes is about less than 6cm.Atmega328p is the microcontroller used in this system and the language used as a software in this embedded system is C language further the Atmega328 is connected with LCD display to show the status of the dustbin and the distance filled,Ultrasonic sensor which helps in finding the distance filled by sending a signal through trigpin and receiving through echo pin and by using the time taken by the echo pin to recieve the signal the distance is calculated,Buzzer and LED is connected which acts as alert signals to indicate when the dustbin is full and the distance is also send through USART which is a communication protocol which could be seen in serial monitor. 


  ![istockphoto-1134301581-612x612](https://user-images.githubusercontent.com/101052348/164467997-77aa57f2-1b53-4144-8e69-1354bfbc0da6.jpg)

# Requirements

## Features

-   The idea is simple and is driven by the fact that dustbins require very frequent cleaning, which is not always possible. This leads to unhealthy environment and spread of diseases. The aim is to get the dustbin cleaned timely using alert services.
   
-   The project is titled as **WASTE LEVEL MONITORING** and developed using C language.
   
-   Atmega328p is the microcontroller used in this system.
   
-   Atmega328p is connected with LCD display to show the status of the dustbin and the distance filled,Ultrasonic sensor which helps in finding the distance filled by sending a signal through trigpin and receiving through echo pin and by using the time taken by the echo pin to recieve the signal the distance is calculated,Buzzer and LED is connected which acts as alert signals to indicate when the dustbin is full and the distance is also send through USART which is a communication protocol which could be seen in serial monitor.
   
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
In my Project the dustbin gives alert signal when the dustbin have distance to fill the wastes is about less than 6cm.Atmega328p is the microcontroller used in this system and the language used as a software in this embedded system is C language further the Atmega328 is connected with LCD display to show the status of the dustbin and the distance filled,Ultrasonic sensor which helps in finding the distance filled by sending a signal through trigpin and receiving through echo pin and by using the time taken by the echo pin to recieve the signal the distance is calculated,Buzzer and LED is connected which acts as alert signals to indicate when the dustbin is full and the distance is also send through USART which is a communication protocol which could be seen in serial monitor.

# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR1 | Ultrasonic Sensor  | Implemented |
| HR2 | Atmega328p | Implemented |
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


# BLOCK DIAGRAM

![BLOCKDIAGRAM](https://user-images.githubusercontent.com/101052348/164615781-91057949-6802-4c3a-96ed-54583996df85.png)

# STATE TRANSITION DIAGRAM

![STATETRANSITIONDIA (1)](https://user-images.githubusercontent.com/101052348/164674472-578d3cb4-e9c0-4b26-8c2c-dcb0d55ff702.png)

# FLOWCHART

![flowchart](https://user-images.githubusercontent.com/101052348/164611554-e5780cc6-e772-4228-bfa7-e396e9ed06c4.png)

# DATA FLOW DIAGRAM

![DATAFLOWDIA](https://user-images.githubusercontent.com/101052348/164614945-20056bdf-29dd-46a5-9f1a-5ad79d50df05.png)

# SCHEMATIC

![SCHEMATIC 1](https://user-images.githubusercontent.com/101052348/164616723-a1065f0d-4750-4fef-a5e3-656388346e50.png)


![SCHEMATIC 2](https://user-images.githubusercontent.com/101052348/164616740-075d68da-1189-49c9-b65d-d33158d74aa7.png)




# Bill of Materials:

## Circuit: Trash.sim1

BUZZER(AudioOut-1) : AudioOut

LCD Display(Hd44780-4) : Hd44780 

Led-74 : Led 

Resistor-99 : Resistor 

Ultrasonic sensor(SR04-3) : SR04 

Microcontroller(mega328-2) : ATmega328p 

# TEST PLAN AND OUTPUT


| TEST ID | Description | Expected I/P | Expected O/P | Actual output | 
|--|--|--|--|--|
| T01 |Sensing distance|bounced signal obtained in echo pin|Correct distance obtained from ultrasonic sensor|Correct distance obtained (**SUCCESS**) | 
| T02 |ATmega328p calculating distance|input from sensor|display distance in LCD|distance displayed (**SUCCESS**)| 
| T03 |Working of LCD and BUZZER |distance from ATmega328p |Turns ON if distance is less than 6cm |Turned On (**SUCCESS**) |
| T04 | USART Communication Protocol  | distance from Atmega 328p|distance is displayed in serial monitor |distance displayed (**SUCCESS**) |

## Distance greater than 6cm

![SCHEMATIC 1](https://user-images.githubusercontent.com/101052348/164620345-e787fe6a-7a9a-40e5-bcb1-ef638edff3ee.png)

## Distance lesser than 6cm

![SCHEMATIC 2](https://user-images.githubusercontent.com/101052348/164620427-08228069-0951-4a0a-b3ed-039406467312.png)

# OUTPUT IMAGES

## Distance greater than 6cm

![SCHEMATIC 1](https://user-images.githubusercontent.com/101052348/164620345-e787fe6a-7a9a-40e5-bcb1-ef638edff3ee.png)

## Distance lesser than 6cm

![SCHEMATIC 2](https://user-images.githubusercontent.com/101052348/164620427-08228069-0951-4a0a-b3ed-039406467312.png)

# Explanation Video

# M2_WASTELEVELMONITORING

## Module 1 Project

|FOLDER|DESCRIPTION|
| --------------- | --------------- |
|0_Abstract|Contains brief explanantion of the project|
|1_Requirements|Contains Details of High level and low level requirements|
|2_Design|Contains designs like Block diagram,State transition diagram,Data flow diagram,Flow Charts,Schematic etc|
|3_Implementation|Contains Project Source Code,Documentation,Simulation etc|
|4_TestCases|Test plans and procedures|
|5_Report|Overall details of project|
|6_Output|Output images, Explanation Videos,.hex file and simulation|


# BADGES

## CODACY

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/8855f03433fb4fb79798d89e11d88e35)](https://www.codacy.com/gh/herenajoshika/M2_WASTELEVELMONITORING/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=herenajoshika/M2_WASTELEVELMONITORING&amp;utm_campaign=Badge_Grade)

## CODIGA

![Codiga_Badge](https://api.codiga.io/project/32910/status/svg)

## WORKFLOWS


|WORKFLOW| BADGE |
| --------------- | --------------- |
| Build |[![Compile-Linux](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/Compile.yml/badge.svg)](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/Compile.yml)|
| Cpp Check |[![Cppcheck](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/CodeQulaity.yml/badge.svg)](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/CodeQulaity.yml)|
| GIT Inspector |[![Git Inspector](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/Git_Inspector.yml/badge.svg)](https://github.com/herenajoshika/M2_WASTELEVELMONITORING/actions/workflows/Git_Inspector.yml)|







