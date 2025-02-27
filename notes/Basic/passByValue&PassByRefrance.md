
```md
# C++: Pass by Value vs. Pass by Reference

## **1. Pass by Value (`T var`)**
### **Definition**  
- A **copy** of the argument is passed to the function.
- Changes inside the function **do not affect** the original variable.

### **Syntax**
```cpp
void displayEmployee(Employee emp) { 
    emp.name = "kalu";  // Modifies only the copy
}
```

### **Example**
```cpp
#include <iostream>

struct Employee {
    int id;
    std::string name;
    double salary;
};

void displayEmployee(Employee emp) {
    emp.name = "Kalu";  // Modifies only the copy
    std::cout << "Inside function: " << emp.name << std::endl;
}

int main() {
    Employee ram = {1, "Ram", 50000.0};
    
    displayEmployee(ram);  // Copy of 'ram' is passed
    std::cout << "After function call: " << ram.name << std::endl;

    return 0;
}
```

### **Output**
```
Inside function: Kalu
After function call: Ram
```

### **Key Points**
✅ Original variable remains unchanged.  
✅ Safer (no accidental modifications).  
❌ Inefficient for large structs (unnecessary copying).  
❌ Modifications do not persist outside the function.  

---

## **2. Pass by Reference (`T& var`)**
### **Definition**  
- The function receives a **reference** to the original variable.
- Any changes **affect the original object**.

### **Syntax**
```cpp
void updateEmployee(Employee &emp) { 
    emp.name = "Kalu";  // Modifies the original object
}
```

### **Example**
```cpp
#include <iostream>

struct Employee {
    int id;
    std::string name;
    double salary;
};

void updateEmployee(Employee &emp) {
    emp.name = "Kalu";  // Modifies the actual 'ram' object
}

int main() {
    Employee ram = {1, "Ram", 50000.0};
    
    updateEmployee(ram);  // Reference to 'ram' is passed
    std::cout << "After function call: " << ram.name << std::endl;

    return 0;
}
```

### **Output**
```
After function call: Kalu
```

### **Key Points**
✅ Modifications persist after function call.  
✅ More efficient for large structs (avoids copying).  
❌ Risky if unintended changes occur.  

---

## **3. Pass by `const` Reference (`const T& var`)**
- Prevents modifications while avoiding copying.  
- Useful for read-only operations on large objects.  

```cpp
void displayEmployee(const Employee &emp) { 
    std::cout << emp.name << std::endl;  // Cannot modify emp.name
}
```

---

## **4. Summary Table**
| Method | Syntax | Modifies Original? | Performance |
|--------|--------|-------------------|-------------|
| **Pass by Value** | `void func(Employee emp)` | ❌ No | ❌ Slow (copies object) |
| **Pass by Reference** | `void func(Employee& emp)` | ✅ Yes | ✅ Fast |
| **Pass by `const` Reference** | `void func(const Employee& emp)` | ❌ No | ✅ Fast |

🚀 **Use pass by reference (`&`) when modifying, and `const &` for read-only access!**
```