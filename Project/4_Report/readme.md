# Temperature Sensor Interfacing with AVR 
## Folder Structure
|Table of Content|Description|
|:-:|:--:|
|0_Requirement|Documents detailing requirements and research|
|1_Architecture|Documents specifying design details|
|2_Implementation|All code and documentation|
|3_TestPlanAndOutput|Documents with test plans and procedures|
|4_Report|Attach Report with all the scope of work|
|5_ImagesAndVideos|All images related to the programming|
## Abstract
Temperature is the number assigned to an object to indicate its warmth. The concept of temperature came about because people wanted to quantify and measure differences in warmth. When an object with a higher temperature comes in contact with a cooler object, a transfer of heat occurs until the two objects are the same temperature. When the heat transfer is complete, it can be said that that the two objects are in thermal equilibrium. Temperature can hence be defined as the quantity of warmth that is the same for two or more objects that are in thermal equilibrium. The temperature 0°C, 273.16 K (kelvin), is the point at which ice, water, and water vapor are all present and in thermal equilibrium.  During the invention of this thermometer some facts were not in place which lead to their disadvantages and with the aid of technology advancement digital thermometer came into existence. Digital thermometer brings together the likes of microcontroller to be interfaced with Lm35 temperature sensor all together working with an embedded C programming language. In advancement in technology, digital thermometer can be added to home automation utilizes, IOT service for medical records, industrial jobs and many more.
## Introduction
A temperature sensor is a device, typically, a thermocouple or resistance temperature detector, that provides temperature measurement in a readable form through an electrical signal.A thermometer is the most basic form of a temperature meter that is used to measure the degree of hotness and coolness.Temperature meters are used in the geotechnical field to monitor concrete, structures, soil, water, bridges etc. for structural changes in them due to seasonal variations.A thermocouple (T/C) is made from two dissimilar metals that generate an electrical voltage in direct proportion with the change in temperature. An RTD (Resistance Temperature Detector) is a variable resistor that changes its electrical resistance in direct proportion with the change in the temperature in a precise, repeatable and nearly linear manner.
## Working of Temperature Sensor
The voltage across the diode terminals is the primary working mechanism of temperature sensors. When the voltage rises, the temperature rises as well, resulting in a voltage drop between the base and emitter transistor terminals of a diode.
## Components Required 
  - ATMEGA 32 Microcontroller
  - LCD16x2 Display
  - LM35 Temperature Sensor
  - Rest Switch 
  - Resistor
  - Voltage
  ## Lets describe  components below
 ## ATMEGA 32 Microcontroller
  - In this project, we will learn How to interface a LM35 temperature sensor with AVR ATmega32 microcontroller and LED display. Here, we will measure the temperature of the surrounding or any other material to which the LM35 temperature sensor is connected for its temperature measurement and we will display the temperature value in degree centigrade in 1X8 LED array. But, the output of LM35 temperature sensor is analog in nature and microcontroller cannot process the analog signal directly. So, first it will convert the analog output of LM35 temperature sensor to digital values using its analog to digital converter and then it process the digital value to convert the digital value in degree centigrade value. Then the microcontroller will display the temperature in degree centigrade in the 1X8 LED array. Now, lit a match stick or lighter near the LM35 temperature sensor and see the changes in its output value in the 1X8 LED array.
 - PIN Diagram - 
 - ![Screenshot ATmega](https://user-images.githubusercontent.com/98878562/155843057-9b71ee85-a641-4871-8e35-cdb0de2c11b6.png)
 ## LCD16x2 Display
 A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel matrix. The 16 x 2 intelligent alphanumeric dot matrix display is capable of displaying 224 different characters and symbols. This LCD has two registers, namely, Command and Data.It displays the temperature 
 ## Sensor
   # LM35-
   LM35 is a temperature sensor that can measure temperature in the range of -55°C to 150°C.
-   It is a 3-terminal device that provides an analog voltage proportional to the temperature. The higher the temperature, the higher is the output voltage.
-   The output analog voltage can be converted to digital form using ADC so that a microcontroller can process it.
-   LM35 is a precession Integrated circuit Temperature sensor, whose output voltage varies, based  on the temperature around it.
## LM35 Sensor Features
-   It is used to Calculate the Temperature
-   Start by building the circuit. 
-   In the circuit, ensure you connect GND to the ground, then power LM35 VCC with +5 operating voltage (Vs). 
-   Thirdly, connect the VOUT to an ADC input (Analog-to-Digital Converter). After which you proceed by sampling the reading from ADC of the output voltage (VOUT). 
-   Finally, finish by converting the output voltage to temperature.   
-   It Can measure temperature ranging from -55°C to 150°C 
-   Low cost temperature sensor
-   Small and hence suitable for remote application.
   ## Pin Description
![LM35 Pinout](https://user-images.githubusercontent.com/98877997/155834037-37e7b047-84a7-40e5-8b96-161c9b48a0bb.png)
-   VCC: Supply Voltage (4V – 30V)
-   Out: It gives analog output voltage which is proportional to the temperature (in degree Celsius).
-   GND: Ground
 ## Circuit Diagram
![ATmega16 LM35 Interface](https://user-images.githubusercontent.com/98877997/155834375-372f961a-6834-4faa-831c-3699c88823ee.png)
## Block Diagram
![Untitled Diagram (1)](https://user-images.githubusercontent.com/98878562/155874806-6dd44e95-01c5-4ac5-b6a8-cb6d2240f1aa.jpg)

   
 
## High Level Requirement
-   To view list of functions.
-   To select the operation which user want to perform in their account.
-   To perform the selected operation that the user had choosen.
-   To get the required result by system  as per the user.
## Low Level Requirement
-   To give input to system.
-   To add an account of the user 
-   To get the details of the customer to perform several functions.
-   ## SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|||||
|||||
|||||
|||||
|||||
## 4W's 1-H
## What-
## Where-
## Who-
## When-
## Why-
## How-


## References
|S.No.|Links|
|:-:|:--:|
|1|[]()|
|2|[]()|
|3|[]()|
|4|[]()|


