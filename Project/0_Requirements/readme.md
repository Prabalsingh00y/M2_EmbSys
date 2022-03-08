## Abstract
A heating system is a device that uses thermal energy to keep temperatures at a comfortable level in places such as cars,homes etc. It aids the system in raising the temperature of an enclosed room with the primary goal of assuring the occupants' comfort. The Seat Heating Control System regulates the temperature of an automobile seat. The button sensor is activated when a passenger or the driver of the car sits in the car seat (which acts as one switch). The user must next turn on the heater (which is known as the recirculation button and plays a vital function in the heat.The temperature sensors work by sensing the temperature emitted by the thermostat and/or the coolant, as well as monitoring and recording the temperature and sending the analogue value to the ATmega328 microcontroller. The temperature sensor's analogue input is fed into the microcontroller, which outputs a temperature reading via USART.
## Introduction:
The Seat heating method is commonly used to control the temperature. A heating element, which is a long strip of material that acts as a resistor, is used to power heated seats. A resistor is a device that blocks the flow of electricity. When electricity passes through it, the energy is converted to heat, which then passes through the seat and warms the riderThe heater can be turned on by the system. The temperature sensor keeps track of the temperature and sends the analogue value to the microcontroller. The microprocessor interprets the temperature sensor's analogue input and outputs a temperature reading via serial connection. The actions of the control system are totally controlled by an Atmega328 microprocessor. In this project the work is illustrated using SimulIDE software simulation and the functionality of the heat control system is coded in embedded C.
## High Level Requirements:
| ID | Description |
|------| ------| 
| HLR1 | Make sure that the temperature sensor is working properly.|
|HLR2  | Examine the temperature value|
|HLR3  |When a person sits in the seat, the heater will automatically turn on. |	
|HLR4  |The first LED illuminates when the both switches are closed, signalling that heater has been activated. |
## Low Level Requirements:
| ID | Description | 
|-------|------|
| LLR1 |Analyze that the coolant level is low or not.| 
| LLR2 | Examine that power supply is running through system  |
| LLR3 | Check the temperature is  display on the the serial monitor.| 
| LLR4 | Check all functions working properly in system.| 
## Components used
### ATMEGA 328-
  - ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. Atmel's ATmega328 is a single-chip microcontroller that belongs to the megaAVR series. It is powered by an 8-bit Atmel AVR CPU and has flash memory and a variety of peripherals. The controllers can work on their own after programming, as long as they have electricity and a quartz crystal with a high clock speed.
### Pin Diagram
![Screenshot (356)](https://user-images.githubusercontent.com/98878562/157198470-22759cb3-7292-44e4-b810-27f7497f9fc0.png)

- LCD ( liquid crystal display)
- LED (Light-emitting diode) 
- Heater core
- Thermostat
 

# **Research:**

Seat warmers were first introduced by Cadillac in 1966 to help with backaches. Some vehicles come with car seat warmers, which heat up the seat with the push of a button. Normally the buttons are located on the side of the driver and passenger door. In some vehicles, just the bottom of the seat warms up, where in others both the bottom and back warm up.

 

# **Benefits:**

Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car’s seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.


## Software used

- SimulIDE

- GCC Compiler for AVR

- VS Code



# **SWOT Analysis:**

**Strength:**

The advantage of such devices is that you can not wait until the entire salon warms up, and immediately go on business. After all, heating has a local effect, so they do their job in 2-5 minutes.

**Weakness:**
- If you do not follow the recommendations and go too far with the temperature, this can lead to a decrease in the driver’s attentiveness, cause fatigue and headaches, and also increase the risk of catching a cold due to a violation of the body’s temperature regime.
- the power cord is plugged in only after you fix the cape;
- if you spill any liquid on the heater cover, immediately turn off the device;
- if you leave the car, do not leave the device turned on;
- you can not wash the capes, iron, maximum-shake;
- Use dry bags to store the heater.

**Opportunities:**

The advanced technologies in automotive seat heaters are predicted to increase the growth of the market in the review period. The latest features like modern seat heaters like consistent and controlled warmth, heating level adjustment are attracting the consumers and are expected to propel the market growth. Growing demand for comfort and energy capabilities in vehicles is accelerating market growth.

**Threats:**
- A lack of regulation for these seats has left consumers more open to injuries.
- Within 10 minutes at 120 degrees an individual can experience third-degree burns. For those with the inability to feel the temperature at the time, this can prove even more dangerous. Those who have been diagnosed with conditions such as paralysis, diabetes, and neuropathy are less like to feel the heat in their lower extremities.
- High electrical resistance could cause the heater pad in the seat to overheat.

# **4W and 1H:**

**What:**
Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car's seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.

**When:**
Heated front seats not only offer luxurious comfort, relaxation and benefits for physical health, but also increase safety. Heating seats and backrests ensures a high level of well-being and prevents a cramped posture. Winter clothes limiting freedom of movement can be dispensed with. This also results in better operation of the restraint system by reducing the slack in safety belts. People with back or kidney problems benefit from a possible reduction of pain. It is mostly used in cars.

**Where:**
In car seats

**Why:**
Heated seats can bring a lot of different benefits beyond just having a nice and warm place to sit. The single greatest benefit that heated seats can bring is the therapeutic warmth it offers. This is great for older drivers or people with a few aches and pains.

**How:**
The longer the seat cushion stays on, the hotter it gets. If it were to stay on for too long, it would get hot enough to become uncomfortable or even dangerous to sit in. It could even start a fire in the cushion. To prevent this, most car seat heaters have a thermostat. The thermostat measures the temperature in the cushion. When it reaches a certain temperature, the thermostat sends a signal, automatically turning off the relay until the seat cools down a bit. At that point, the thermostat turns the relay back on again. Many seat cushions also have “high” and “low” settings that let the driver control the temperature of the seat cushions.
