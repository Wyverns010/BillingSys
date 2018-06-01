# RTAPV
IOT based (real time) pollution measuring device

 Its a side project I did just for the heck of it but it turned out to be somewhat decent.

Basically, there is a carbon monoxide sensor that reads data from the vehicle's exhaust, the wifi module then sends that data to the website pollutiondata.rf.gd, which I created using infinityfree.net, a free domain providing service. The data then can be viewed by the user(or us, cuz there's only one device). The php script I wrote also appends that data in a text file, which in this case works as a database.

I need to fix the smaller bugs in the code and try to caliberate the sensor, so that it is reliable.

Also the wifi module is a bit iffy, it's too sensitive and only works for a particular voltage range so it is hard to program and use, I would recommend the nodeMCU one if anyone is doing a similar project.

Feel free to point out the mistakes and advices that you have, the project is still under development and most of the code uploaded here, you can find different versions of it on different websites, all open source. This project is just my way of solving a very serious problem, that is pollution, a better monitoring system is much needed, that's what I tried to make here. 


