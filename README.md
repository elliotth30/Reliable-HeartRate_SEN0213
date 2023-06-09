# Reliable-HeartRate_SEN0213
This is an example Arduino code that takes the RAW heart rate input from the sensor, ignores the initial unstable readings and outputs a very stable rolling average reading, great for wearable and physical computing electronics projects. The code has easily changeable variables for fine turning.

# How to install
Before running the code you will need to install the required library to use the code.
1. Firstly go to https://github.com/lfwag/HeartSpeed to download the required library and save it somewhere you will remember such as your 'Downloads'.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Download_Library.png)
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Download_ZIP.png)

2. Once the ZIP has downloaded, open your Arduino IDE and navigate across the top of your screen making the following selections.
(Sketch > Include a Library > Add a .ZIP Library...). 

A selection menu will then pop-up, select the ZIP file you downloaded a click 'Choose'.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Select_ZIP_1.png)
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Select_ZIP_2.png)

3. Now that your Library in installed you need to download the example code as a zip from this repository or click the following link (https://github.com/elliotth30/Reliable-HeartRate_SEN0213/archive/refs/heads/main.zip) and extract it into a folder, then open in Arduino IDE - before running like any other Arduino code (Detailed Instructions Below)

3a. Open the file in the Arduino IDE.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Code_Overview.png)
3b. Then Select your board and port along the top.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Select_Board.png)
3c. Once selected click the 'Upload' code button.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Code_Upload.png)
3d. Now you can open the 'Serial Monitor' to see the results coming through. If you have not set up your sensor with your Arduino or alternative microcontroller you can then follow the instructions in the 'How to connect Section' - and press the reset button on your Arduino to start seeing your results.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Serial_Monitor.png)
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_Serial_Readings.png)

# How to Connect
Full instructions can be found at https://wiki.dfrobot.com/Heart_Rate_Monitor_Sensor_SKU__SEN0213, However this diagram on the site shows how to connect the board to an Arduino Uno through the following connection.
It is important to note that the electrodes are best places on bare skin so shave a small patch if you have lots of hair is adviced.
![](https://github.com/elliotth30/Reliable-HeartRate_SEN0213/blob/main/README_Images/_dfrobot_Connections.png)
