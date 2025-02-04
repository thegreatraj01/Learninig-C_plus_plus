# C++ Functions Guide

## 1. How to Create a Function in C++

A function in C++ is a block of reusable code that performs a specific task. It consists of a declaration (optional), definition, and call.

### Syntax:

```cpp
returnType functionName(parameters) {
    // function body
}
```

### Example:

```cpp
#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, World!" << endl;
}

int main() {
    sayHello(); // Calling the function
    return 0;
}
```

---

## 2. Declaration and Definition of a Function

### **Function Declaration (Prototype)**

- The function is declared before `main()`.
- This tells the compiler that a function exists before its actual definition.

### **Function Definition**

- The actual implementation of the function.
- Can be written before or after `main()`.

### Example:

```cpp
#include <iostream>
using namespace std;

// Function declaration
void greet();

int main() {
    greet();
    return 0;
}

// Function definition
void greet() {
    cout << "Hello, Welcome!" << endl;
}
```

---

## 3. Function Overloading

Function overloading allows multiple functions with the same name but different parameters.

### Example:

```cpp
#include <iostream>
using namespace std;

void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

void display(string text) {
    cout << "String: " << text << endl;
}

int main() {
    display(5);
    display(3.14);
    display("Hello");
    return 0;
}
```

---

## 4. Default Parameter

A function can have default values for parameters, which are used if no argument is provided.

### Example:

```cpp
#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();       // Uses default value "Guest"
    greet("Alice"); // Uses provided value "Alice"
    return 0;
}
```

---

## 5. Call by Value and Call by Reference

### **Call by Value**

- A copy of the argument is passed to the function.
- Changes inside the function do not affect the original value.

#### Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 10; // This change will not affect the original variable
}

int main() {
    int num = 5;
    changeValue(num);
    cout << "Value after function call: " << num << endl; // Output: 5
    return 0;
}
```

### **Call by Reference**

- The original variable is passed to the function using a reference (`&`).
- Changes inside the function affect the original value.

#### Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int &x) {
    x = 10; // This change will affect the original variable
}

int main() {
    int num = 5;
    changeValue(num);
    cout << "Value after function call: " << num << endl; // Output: 10
    return 0;
}
```

---

## 6. Lambda Functions

Lambda functions are anonymous functions that can be used inline.

### Basic Syntax:

```cpp
[capture_list] (parameters) -> return_type {
    function_body
};
```

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    auto greet = []() {
        cout << "Hello from Lambda!" << endl;
    };
    greet(); // Calling the lambda function
    return 0;
}
```

### Lambda with Parameters:

```cpp
#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "Sum: " << add(5, 3) << endl;
    return 0;
}
```

### Capturing Variables:

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    auto showNum = [num]() {
        cout << "Number: " << num << endl;
    };
    showNum();
    return 0;
}
```

---

## Conclusion

This guide covers the basics of functions in C++, including declarations, definitions, overloading, default parameters, call-by-value/reference, and lambda functions. Mastering these concepts will help you write efficient and reusable C++ code!

