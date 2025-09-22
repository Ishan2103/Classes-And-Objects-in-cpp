# Classes and Objects in CPP

---

## Overview of Classes and Objects in C++

In C++, **Classes** are user-defined data types that serve as blueprints for creating **Objects**. They encapsulate data (member variables) and functions (member methods) that operate on that data into a single unit. This concept is fundamental to Object-Oriented Programming (OOP) and promotes code reusability, organization, and modularity.

An **Object** is an instance of a class. When a class is defined, no memory is allocated; memory is only allocated when an object of that class is created. Objects allow us to interact with the data and functions defined within the class.

---

## 1. Student Information

This program defines a class named `student` with public member variables: `name`, `branch`, `subject` (all strings), and `result` (float). It then creates two objects, `s1` and `s2`, of the `student` class. For each student object, it assigns specific values to their respective member variables and then prints these details to the console, demonstrating how to access and display object properties.

**Algorithm**:
1.  **Define** a `student` class with public members: `name` (string), `branch` (string), `subject` (string), `result` (float).
2.  **Declare** two `student` objects, `s1` and `s2`.
3.  **Assign** values to `s1`'s `name`, `branch`, `subject`, and `result`.
4.  **Print** `s1`'s details.
5.  **Assign** values to `s2`'s `name`, `branch`, `subject`, and `result`.
6.  **Print** `s2`'s details.

Output:
student 1
Ninad Phatak
Mechanical
C++
8.6
student 2
Atharv Jamali
ENTC
Mathematics
7

---

## 2. Car Details

This program defines a `Car` class with public member variables: `brand`, `model` (strings), `year`, and `price` (integers). The `main` function declares three `Car` objects: `c1`, `c2`, and `c3`. For each car, the program prompts the user to enter details such as brand, model, year, and price using standard input. After collecting all inputs, it displays the details of each car, demonstrating user input handling and object data storage.

**Algorithm**:
1.  **Define** a `Car` class with public members: `brand` (string), `model` (string), `year` (int), `price` (int).
2.  **Declare** three `Car` objects: `c1`, `c2`, `c3`.
3.  For each car object (`c1`, `c2`, `c3`):
    a.  **Prompt** the user to enter `brand`, `model`, `year`, and `price`.
    b.  **Read** input values into the respective object's members.
4.  **Print** a header "Car Details".
5.  For each car object (`c1`, `c2`, `c3`):
    a.  **Print** the car number (e.g., "Car 1:").
    b.  **Print** its `brand`, `model`, `year`, and `price`.

Output:
Enter details for Car 1:
Brand: BMW
Model: X3
Year: 2022
Price: 1000000

Enter details for Car 2:
Brand: Mazda
Model: Miata
Year: 1998
Price: 3000000

Enter details for Car 3:
Brand: Toyota
Model: Corolla
Year: 2002
Price: 2000000
Car DetailsCar 1:Brand: BMWModel: X3Year: 2022Price: $1000000
Car 2:Brand: MazdaModel: MiataYear: 1998Price: $3000000
Car 3:Brand: ToyotaModel: CorollaYear: 2002Price: $2000000

---

## 3. Rectangle Area

This program defines a `Rectangle` class with private member variables `length` and `width`. It includes a constructor `Rectangle(int l, int w)` to initialize these dimensions when an object is created. The class also has two public methods: `square()` which returns `true` if the rectangle is a square (length equals width), and `area()` which calculates and returns the area. The `main` function takes user input for length and width, creates a `Rectangle` object, and then determines if it's a square or a rectangle before printing its calculated area.

**Algorithm**:
1.  **Define** a `Rectangle` class with private members `length` and `width`.
2.  **Implement** a constructor `Rectangle(int l, int w)` to initialize `length` and `width`.
3.  **Implement** a public method `bool square()` that returns `true` if `length == width`, `false` otherwise.
4.  **Implement** a public method `double area()` that returns `length * width`.
5.  In `main()`:
    a.  **Declare** `length` and `width` variables.
    b.  **Prompt** the user to enter `length` and `width`.
    c.  **Read** `length` and `width`.
    d.  **Create** a `Rectangle` object `r` using the input `length` and `width`.
    e.  **Check** if `r.square()` is true; if so, print "This is a square.", else print "This is a rectangle.".
    f.  **Print** "Area: " followed by `r.area()`.

Output:
Enter length: 4
Enter width: 4
This is a square.
Area: 16

Enter length: 2
Enter width: 3
This is a rectangle.
Area: 6

---

## 4. Simple Calculator

This program implements a `Calculator` class to perform basic arithmetic operations. The class has private member variables `x` and `y` for the two numbers, initialized using a constructor `Calculator(double a, double b)`. It provides public methods for `add()`, `subtract()`, `multiply()`, and `divide()`. The `divide()` method includes error handling for division by zero. The `main` function takes two numbers as input from the user, creates a `Calculator` object, and then displays the results of all four operations.

**Algorithm**:
1.  **Define** a `Calculator` class with private members `x` and `y` (doubles).
2.  **Implement** a constructor `Calculator(double a, double b)` to initialize `x` and `y`.
3.  **Implement** public methods:
    * `double add()`: returns `x + y`.
    * `double subtract()`: returns `x - y`.
    * `double multiply()`: returns `x * y`.
    * `double divide()`: returns `x / y` if `y != 0`, otherwise prints an error and returns `0`.
4.  In `main()`:
    a.  **Declare** `a` and `b` variables (doubles).
    b.  **Prompt** the user to enter two numbers.
    c.  **Read** `a` and `b`.
    d.  **Create** a `Calculator` object `calc` using `a` and `b`.
    e.  **Print** "Addition: " followed by `calc.add()`.
    f.  **Print** "Subtraction: " followed by `calc.subtract()`.
    g.  **Print** "Multiplication: " followed by `calc.multiply()`.
    h.  **Print** "Division: " followed by `calc.divide()`.

Output:
Enter two numbers: 5
3
Addition: 8
Subtraction: 2
Multiplication: 15
Division: 1.66667

---

## 5. Volume of a cube with method inside class

This program defines a `Cube` class to calculate the volume of a cube. It has a private member variable `side`. The class includes a public `input()` method to prompt the user to enter the side length and a public `volume()` method that calculates the cube's volume (`side * side * side`). In the `main` function, a `Cube` object is created, its `input()` method is called to get the side, and then its `volume()` method is called to display the calculated volume.

Output:
Enter side of cube: 4
Volume: 64

---

## 6. Volume of cube with method outside the class

This program also calculates the volume of a cube using a `Cube` class with a private `side` member. Similar to the previous example, it has an `input()` method to get the side length. However, the calculation of the volume is performed by a global function `volume(Cube c)` that takes a `Cube` object as an argument. The `Cube` class provides a `k()` method to return the `side` value, allowing the external `volume` function to access it. This demonstrates how a function outside the class can interact with object data through public member functions.

Output:
Enter side of cube: 5.5
Volume: 166.375

---

## 7. Find Error

This program defines a `cube` class with public member variables `height`, `width`, and `length`, initialized with default values. It includes a `volume()` method that calculates the product of these dimensions. The `main` function creates a `cube` object, calls its `volume()` method, and then prints the `height` and the calculated `volume`. The "Find Error" in the title typically implies looking for logical or syntax errors, but in this case, the provided code runs correctly and produces the expected output based on the initial values. The "error" might be a conceptual prompt to understand how the code functions or to identify potential areas for improvement (e.g., making member variables private and using getters/setters).

Output:
height
2volume
30


