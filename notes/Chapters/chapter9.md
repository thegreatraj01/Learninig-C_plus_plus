# Notes on C++ Code (Chai Class Example)

## 1. Overview
- The program defines a class `Chai` that represents different types of tea.
- Each object of the class stores information about a tea type, including its name, servings, and ingredients.
- The class has a member function `displayChaiDetails()` to print tea details.
- The `main()` function creates and initializes two `Chai` objects and displays their details.

---

## 2. Class `Chai` Details

### a) Data Members (Attributes)
- `string teaName` → Stores the name of the tea.
- `int servings` → Stores the number of servings.
- `vector<string> ingredients` → Stores a list of ingredients used in the tea.

### b) Member Function
- `void displayChaiDetails()` → Prints the tea name, number of servings, and the list of ingredients.

### c) Access Specifiers
- By default, everything in a class is **private** in C++.
- Since no access specifier (`public`, `private`, `protected`) is mentioned before the attributes and function, they are explicitly declared as `public` to be accessible outside the class.

---

## 3. `main()` Function Details

### a) Creating Objects
- Two objects, `chaione` and `chaitwo`, are created using the `Chai` class.

### b) Initializing Objects
- `chaione` is assigned values:
  ```cpp
  chaione.teaName = "Lemon tea";
  chaione.servings = 5;
  chaione.ingredients = {"water", "milk", "suger", "tea leafs"};
  ```
- `chaitwo` is assigned values:
  ```cpp
  chaitwo.teaName = "Mashala tea";
  chaitwo.servings = 3;
  chaitwo.ingredients = {"Milk", "Water", "Suger", "Ginger", "Tea_mashala"};
  ```
  
### c) Displaying Tea Details
- The `displayChaiDetails()` function is called for both objects to print their information.

---

## 4. Important Notes
✅ By default, everything inside a `class` in C++ is **private** unless specified otherwise using `public`, `private`, or `protected`.
✅ The `public` keyword is used to allow external access to class attributes and functions.
✅ The `vector` container is used to store multiple ingredients dynamically.
✅ The program correctly iterates over the `vector` using a **range-based for loop**.

