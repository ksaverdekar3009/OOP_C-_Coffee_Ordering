The Coffee Ordering System is a console-based application designed to simulate and manage operations in a cafe environment, specifically themed around Starbucks. Built using C++ with an emphasis on object-oriented programming principles, the system facilitates menu display, order placement, and customer interaction, ensuring a seamless user experience.

Features:
Menu showcasing items with details such as item number, name, price, and stock availability.
Allows customers to place orders by selecting item numbers and specifying quantities.
Calculates the total cost based on the quantity and price.
Collects customer details like name and phone number.
Saves customer data and order summary to a file for future reference.
Prompts the user to confirm their order.
Option to add more items or finalize the order.
Stores order details and customer data into a text file.
Appends a thank-you message and confirmation details to the file.
Handles invalid inputs gracefully, ensuring a smooth user experience.

Technical Specifications:
Programming Language: C++
Key Libraries Used:
iostream: For input and output operations.
string.h: For handling string operations.
fstream: For file operations.
Programming Paradigms:
Object-Oriented Programming (OOP) with classes, constructors, destructors, and friend functions.
Scope resolution for defining member functions.

System Workflow:
Displays the cafe's menu when the program starts.
Prompts the user to input their name and phone number.
Item Class:Manages item-related operations, such as selecting items, specifying quantities, and calculating total amounts.
Writes order details to a file for record-keeping.
Order Confirmation:
The user confirms the order and adds additional items if needed.
Finalizes the order with a thank-you message.
File Handling:
Stores customer details and order history in a file for persistence.

How It Works:
Upon launching, the application welcomes the user and displays the menu.
The user enters their details and selects items to place an order.
The system calculates the total price and confirms the order.
All transaction details are stored in a file named File.txt.

Benefits:
Simple and efficient system to manage cafe orders.
Demonstrates the practical use of object-oriented programming.
Utilizes file handling for order tracking and record maintenance.
