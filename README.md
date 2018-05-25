# RTAPV
IOT based (real time) pollution measuring device

ABSTRACT

Air pollution has had devastating impacts on public health and environment, hence it has become a major concern especially in urban areas. A real-time system is essential because conventional systems are not scalable resulting in limited data of pollution levels available to us for detailed research. The need is for a gadget which can sense the level of pollutants at any time instant and help us know about the condition of the vehicles. This project of ours aims to automate the process of checking quantity of pollutants in cars and send data to a website using local Wi-Fi for regular analysis of pollution levels as well as storing that data for future reference. The real time analysis is the need of the hour and we strive to achieve that aim through this project. The device has been created to be of aid to the environment and the society.

The abstract is from the paper that I submitted for a conference in my college..... It makes the project a bit scary actually...
Anyways, Its a side project I did just for the heck of it but it turned out to be somewhat decent.

Basically, there is a carbon monoxide sensor that reads data from the vehicle's exhaust, the wifi module then sends that data to the website pollutiondata.rf.gd, which I created using infinityfree.net, a free domain providing service. The data then can be viewed by the user(or us, cuz there's only one device). The php script I wrote also appends that data in a text file, which in this case works as a database.
I wanted to include cloud computing in this project, because the practical scenario would include many-many cars sending data, so a
regular website would not be enough, but that itself is quite a large topic, so it is on hold for now. First I need to fix the smaller bugs in the code and try to caliberate the sensor, so that it is reliable.

Also the wifi module is a bit iffy, it's too sensitive and only works for a particular voltage range so it is hard to program and use, I would recommend the nodeMCU one if anyone is doing a similar project.

Feel free to point out the mistakes and advices that you have, the project is still under development and most of the code uploaded here, you can find different versions of it on different websites, all open source. This project is just my way of solving a very serious problem, that is pollution, a better monitoring system is much needed, that's what I tried to make here. 


