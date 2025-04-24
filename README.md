# Cinema Payment System with C++  

## 📝 __Overview__  
This program was created for people eager to watch movies in cinema halls during the COVID-19 pandemic in 2020. It simulates a registration process that requires only one person to go to the counter for buying tickets on behalf of a group and minimize human contact. Thus it can help to maintain social distance during the pandemic.
The source code was written and compiled using Dev-C++ IDE running on Windows 10 operating system.  

## 📂 __Contents__  
| File Name | File Type | Description |
|-----------|-----------|-------------|
| README | MD | Read this before anything else |
| Cinema Registration System Code | CPP | File containing the C++ source code |
| Cinema Registration System Code | EXE | Executable output of the compiled C++ code |  

## 🔍 __Programming Elements__    
###Structure  
![Screenshot from 2025-04-24 19-47-57](https://github.com/user-attachments/assets/6de9f72d-1fc2-4aac-926f-0f1394e2ed1b)  
Defines a custom data type to group buyer's name and phone number.  

###Function Prototypes  
![Screenshot from 2025-04-24 19-51-37](https://github.com/user-attachments/assets/95adc2c6-6695-440a-8add-7144d00832fa)  
The function seatbooked() updates seat count while totalprice() calculates total price.  

###Structure Usage  
![Screenshot from 2025-04-24 19-52-19](https://github.com/user-attachments/assets/901c3789-c364-4604-af22-c23c74a62b31)  
Creates a variable 'buyer' of type info to store user input.  

###Loop  
![Screenshot from 2025-04-24 19-54-21](https://github.com/user-attachments/assets/50cb51e9-4e83-4856-a081-b2a4012e775a)  
![Screenshot from 2025-04-24 19-54-54](https://github.com/user-attachments/assets/de116332-940d-4175-a9be-a0ce5e27142e)  
A do-while loop runs the ticket booking logic repeatedly based on conditions.  

###Array  
![Screenshot from 2025-04-24 19-55-45](https://github.com/user-attachments/assets/91e95dc5-c985-46a0-9499-f75907161655)  
Stores available movie names. Accessed via index based on user input to display the selected movie.  

###Function Calls  
![Screenshot from 2025-04-24 19-56-23](https://github.com/user-attachments/assets/5a8d98c4-355d-4be8-8b55-fb4c1670038c)  
Called to update the seat count and calculate the total payment after each input.  

###Conditional Statements  
![Screenshot from 2025-04-24 19-57-14](https://github.com/user-attachments/assets/b0cf05ca-47c2-41ad-b9c4-e5e346703436)  
Used to check if seat limit is reached and decide whether to exit or continue based on user input (flag).  
  
## ▶️ __How to Run the Program__  
Simply open the CPP file double-clicking on it. If you are using Dev-C++, click on te Compile icon in the taskbar near the top of the window or press F9. If compilation succeeds, click on the Run icon or press F10.  
  
### Once the Program is running:  
![image](https://github.com/user-attachments/assets/4e91136a-a331-4c4c-a58f-07d3f3c74fdd)  
The user is greeted and is asked to enter their Name and Phone Number. (Hit Enter after typing the input)  

![image](https://github.com/user-attachments/assets/9e653b52-6e7d-4d81-8400-7f1846b582c1)  
The user is then asked to enter the number corresponding to the movie they want to watch. (The order and serial number can be manually customized in the source code)  

![image](https://github.com/user-attachments/assets/0f8b9392-40fc-40c0-9880-f2f35a0e55ea)  
Hitting Enter displays a summary of the information provided (Customer info and price based on age group).  

![image](https://github.com/user-attachments/assets/ece58d9e-7b60-4e37-9442-e8b019966d8b)  
It also the total sales and number of seats remaining for a session.  

![image](https://github.com/user-attachments/assets/c510259f-cfb9-4154-a761-c8882751c9f2)  
The program can continue to run by another user or terminated.  

## 📌 __Things to Keep in Mind__  
* Entering invalid inputs (such as typing letters for integer variables) can lead to the program terminating unexpectedly.  
* When entering the phone number, if the number begins with a 0, the 0 gets omitted because the variable's data type is integer.  

## 🫱🏻‍🫲🏼 __Credits__  
This project was conducted in collaboration with my classmates taking the course SMJE1013 (Programming for Engineer):  
* Khor Jia Ming  
* Mohammad Tanvir Azam Rizvie  
* Muhammad Hadif Bin Hazizi  
* Muhammad Haziq Bin Mohd Razduan  
