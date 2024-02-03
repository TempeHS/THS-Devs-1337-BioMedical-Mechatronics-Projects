# HeartBeat Buddy

The Heart Beat Buddy is a heart rate and stress monitor personalised for a specific patient, Michelle. 
Michelle suffers from 'silent' myocardial infarction localised to the inferior aspect of the left ventricular. A contributing factor that can worsen her condition is her highly stressful work environment. 

## Solution

The Heart Beat Buddy is a product designed to suit Michelle's needs. It will monitor her environment and her heart rate to determine if she has high stress levels, which may put her at risk of a heart attack. The product is a lanyard that Michelle will wear daily, personalised to suit her work attire and is user friendly. 
Contained in the casing of the product, is a GSR sensor to detect Michelle's stress levels, a loudness sensor to detect the loudness of her environment and wired around the lanyard is an ear clip heart rate monitor. 
Located on the front of the casing, is an OLED screen which will output information gathered from the sensors. A buzzer will be loacted on the side of the casing, that would buzz to warn Michelle when she is in a highly stressful environment. The buzzer will be activated in an extreme situation where Michelle would be at a very high risk of a heart attack depending on the readings from each sensor. 

## Pictorial
![HeartBeat Buddy Pictorial](https://github.com/TempeHS/2023IST-BioMech-HeartbeatBuddy-Aarav.S-Ariya.V-Jaiden.W/blob/main/.workingDocuments/Heart%20Monitor%20Lanyard%20Pictorial.jpg)

## Functions 
### Ear Clip Heart Rate Sensor - Digital Pulse
The ear clip heart rate sensor will detect the heart rate of the user and inform them of their heart rate through the OLED screen. The heart rate is measured in BPM.
### Loudness Sensor - Analog
Detects the loudness of an environment. The sensor will allow the user to monitor the loudness of their environment which is particularly important for patients suffering from cardiovascular disease as noise is a contributing factor to stress. The loudness of an environment triggers a reaction in the body which, with over exposure to loud environments, can be a factor that worsens cardiovascular diseases.  
### GSR (Galvanic Skin Response) Sensor - Analog
A method of measuring electrica conductance of the skin, a reflection of human emotional activity. The GSR measures the levels of electrical current conducted through skin. It is measured through the levels of perspiration on the skin, allowing greater conductance of electrical currents. 
### Buzzer - Digital Pulse
Buzzers are an output method that output simple sounds when activated. 
### OLED Screen - I2C
A 128×64 dot resolution screen with a compact design for low power consumption. The OLED screen will display information gathered from various sensors and inform the user.

## Assigned Roles
**Aarav**
- [x] Ear clip Heart Rate Monitor
- [x] Buzzer 

**Jaiden**
- [x] Loudness Sensor
- [x] OLED screen 

**Ariya**
- [x] GSR (Galvanic Skin Response) sensor
- [x] Read Me

## Sensor Testing 
- [x] Loudness sensor successful
- [x] GSR sensor successful 
- [x] Ear clip Heart Rate Monitor successful
- [x] OLED screen test successful
- [x] Buzzer test successful

## Sensor Notes

### Heart Rate Monitor
Heart rate monitor only works on Arduino Uno Board R3 (older version).
Sensor has not been reading accurate data. 

## Code Integration Process
### 01/11/2023
#### Jaiden
- Created functions file for loudness sensor

#### Aarav
- Problem solving code for sensors to gather more accurate data

#### Ariya
- Added more information to README

### 13/11/2023
#### Jaiden 
- Working on functions for loudness sensor

#### Aarav 
- Decoding Heart Rate Ear clip Monitor for accurate readings

#### Ariya
- Update ReadMe
- GSR Sensor code

### 14/11/2023 - Sensor Change 
#### Aarav
- Intergrating Heart Rate Ear Clip Monitor code into main

#### Ariya
- Intergrated GSR sensor function into main

### 28/11/2023
Testing and decoding Heart Rate Monitor code as the sensor was changed due to previous faulty Ear clip heart rate monitor.
### 29/11/2023
Intergrating all components of Heart Beat Buddy including: buzzer, OLED, Heart Rate monitor, GSR and Loudness sensor. Testing each sensor and component then began incorporating logic into code.
