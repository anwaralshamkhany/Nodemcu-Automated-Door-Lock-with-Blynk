# Nodemcu-Automated-Door-Lock-with-Blynk

This is an Arduino compatible board that connects to your local wifi which can then be paired with your phone using the Blynk library. Then the Nodemcu can receive commands coded in Arduino and with the UI through a smartphone. Essentially the Blynk app has a UI similar to any smarthome appliance. Once you get the mobile app from the app store you will have to create a new project, change the board settings to the Nodemcu, and then the desired pin output to whichever one you connected it to. After you create the project you will recieve an authentification key where you would enter it in the section requested in the arduino code. Below is a picture of what it should look like.

<img width="244" alt="lightswitch" src="https://user-images.githubusercontent.com/81518926/131907853-db96507a-d896-4e9d-bd2a-29c7e9db9ce4.png">


# Hardware Setup
Will need to 3D print 2 files to attach the servo to lightswitch for one piece and then the other acts as a mechanism to turn off the lights when the servo rotates. you will need 3 screws that come with the servo for mounting and then the 2 orginal screws for you light switch.

List of parts you need:
The 2 STL files to 3d print at a density of 15% in PLA the rest of the settings are standard                                                                                     
Servo Motor: https://www.amazon.ca/s?k=servo+motor&ref=nb_sb_noss_2                                                                                     
Nodemcu: https://www.amazon.ca/KeeYees-Internet-Development-Wireless-Compatible/dp/B07PR9T5R5/ref=sr_1_8?dchild=1&keywords=nodemcu&qid=1630611583&sr=8-8
