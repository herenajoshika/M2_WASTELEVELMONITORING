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

![flowchart](https://user-images.githubusercontent.com/101052348/161390994-bcda4f37-6ed9-4351-a83e-d68d3b197554.png)

## SWOT Analysis

![SWOT_ANALYSIS](https://user-images.githubusercontent.com/101052348/164480330-974dc9b6-7d0d-4453-b389-1654fe1572a8.png)

# 4 W's and 1 H

## Who
Anyone with an Smart Phone and a bank account can use for their car wash or to rent a car.

## What
It's an application to book a car to rent or to book a car wash.

## When
Booking is available 24X7, 365 days.

## Where
It can be used by a user whenever from anywhere when he/she has an requirement to rent a car or to wash their car.

## How
When a user needs to book a rental car or car wash, they can enter their preference of a car to be rented and the Card number.The detailed recipt of balance which is present in the card after booking a car and the details of the car booked will be displayed.If in case the car wash option is pressed the detailed recipt on the balance in the card and the booking status will be displayed on giving the correct card number.This application was developed in C language to avoid the complexity and to keep it simple. 

# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR1 |Options to be chosen  | Implemented |
| HR2 | Rentcar option | Implemented |
| HR3 | Car wash option |  Implemented |
| HR4 | Exit option |  Implemented |
| HR5 | Error message if input is wrong |  Implemented |
| HR6 | Graphical User Interface | Future |
| HR7 | Depositing system | Future |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR1 |Main menu should consist 3 options: 1.Car rent, 2.Car wash, 3.Exit  | HR01| Implemented |
| LR2 | A car can be rented from the given list of cars and the balance id returned | HR02| Implemented |
 LR3 | A car wash booking is done and the balance id returned  | HR03| Implemented |
| LR4 | Exits from the program when called | HR04| Implemented |
| LR5 |Should display error message if the input is wrong | HR05| Implemented |
| LR6 |A clean graphical user interface in an app for easy booking  | HR06| Future |
| LR6 |Depositing system if incase the balance is insufficient  | HR07| Future |

## BEST METHOD FOLLOWED

C programming is one of the less complex language through which this application is done.Car renting is done from anywhere through this application and also Car wash can be booked from anywhere and also the working of the application is easy to understand and also to work on which makes it more versatile for any person to use.





