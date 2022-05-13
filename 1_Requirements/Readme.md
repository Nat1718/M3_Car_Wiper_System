## Introduction
In  the  modern  world,  researchers  are  trying  to  develop automobile  industry  immensely  for  safety,  reliability, flexibility and entertainment by using modern technology.
On the other  hand, consumers  are expecting their vehicles to  be auto-driven,  voice  controlled  and  GPS  assisted  visual directions  for driving  and equipped  with mp3  player,  video player  and  many  more  gadgets. 
      
## Working      
A  wiper  normally consists  of an  arm,  pivoting  at one  end  with a  long rubber blade attached to the other. 
The blade is swung back and forth over  the  surface,  removing  water.  
The  speed  is  normally adjustable manually, with several continuous speeds and often one or more intermittent settings.

## Strength
The wiper comes back to default position even if stooped in the middle
Safety for the driver as well as the passengers in the vehicle
Clear Visibility to the Driver for neat ride.

## Weakness
The total cost of the wiper system is high if implemented in real-time.
The major disadvantage is that STM32 contains only one button for all the operation
User has to undergo a sequence to acquire desired result and can't attain his result directly with the press of the button.

## Opportunities
Rain sensing and automatic operation can be implemented as further enhancement.

## Threats
Replacing the board is not possible if it malfunctions.
Can't have more functions as the functionality of the board is very basic.


## Components Used

## Stm32
The STM32 family of 32-bit microcontrollers based on the Arm® Cortex®-M processor is designed to offer new degrees of freedom to MCU users. It offers products combining very high performance, real-time capabilities, digital signal processing, low-power / low-voltage operation, and connectivity, while maintaining full integration and ease of development.

## Servo Motor
A servomotor is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback.

## Resistors
A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow.

## Capacitor
A capacitor is a device that stores electrical energy in an electric field. It is a passive electronic component with two terminals. The effect of a capacitor is known as capacitance.

## LED's
A light-emitting diode is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.

## Cables and Connector
A cable, also known as a cord, plug, or connector transmits power or data between devices or positions, which is covered in plastic by one or more wires.

## Push Button
A push-button or simply button is a simple switch mechanism to control some aspect of a machine or a process. Buttons are typically made out of hard material, usually plastic or metal.

# High Level Requirements

| ID | Description | Status |
|----|--------------|-------|
| HLR01 | Detecting rainfall and active automobile rain wiper | Implemented |
| HLR02 | It operate manually | Implemented |
| HLR03 | Displaying the information in led | Implemented |

# Low Level Requirements

| ID | Description | Status |
|----|--------------|--------|
| LLR01 | It work functionally according to outside water | Implemented |
| LLR02 | Consume less power | Implemented |

## Q

## What
Wipers system are operated by an electric motor and vechile. And to ensure safety for the passengers and drivers during rainy conditions.

## When
It is recommended to operate during dust or rain

## How
It is implemented with the help of STM32 with the desired operation of turning on the engine, changing of speeds and turning off with the help of Embedded c Programming.     

## Where
Wipers system can be activated by a lever located to the right of the steering wheel. Pulling the lever down should activate the windshield wipers on their lowest setting

## Why
The main purpose of the wiper system is to clean the windscreen and to get a clear vision of the road.


     
