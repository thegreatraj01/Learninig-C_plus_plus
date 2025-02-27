Here’s your **short note** without the IntelliSense extension part:  

```md
# C++ Structs, Variable Creation, and Function Passing

## **1. Creating a Struct and Variables**
```cpp
struct Employee {
    int id;
    std::string name;
    double salary;
};

// Creating instances of the struct
Employee ram = {1, "Ram", 50000.0};  // Normal Initialization
Employee shyam = {};  // Default Initialization (all members set to default)

// C++20 Designated Initializers
Employee sita = {.id = 3, .name = "Sita", .salary = 60000.0};
```

---

## **2. Passing Structs to Functions**
| Method | Syntax | Modifies Original? | Performance |
|--------|--------|-------------------|-------------|
| **Pass by Value** | `void func(Employee emp)` | ❌ No | ❌ Slower (copies object) |
| **Pass by Reference** | `void func(Employee& emp)` | ✅ Yes | ✅ Fast |
| **Pass by `const` Reference** | `void func(const Employee& emp)` | ❌ No (read-only) | ✅ Fast |
| **Pass by Pointer** | `void func(Employee* emp)` | ✅ Yes | ✅ Fast |

### **Examples**
```cpp
// 1. Pass by Value (Creates a Copy)
void display(Employee emp) { emp.name = "Kalu"; }  // Changes copy only

// 2. Pass by Reference (Modifies Original)
void update(Employee &emp) { emp.name = "Kalu"; }  // Changes actual struct

// 3. Pass by `const` Reference (Read-Only Access)
void readOnly(const Employee &emp) { /* Cannot modify emp */ }

// 4. Pass by Pointer (Alternative Way to Modify)
void updatePtr(Employee *emp) { emp->name = "Kalu"; }  // Changes actual struct
```

### **Function Calls**
```cpp
Employee ram = {1, "Ram", 50000.0};

display(ram);        // Pass by Value (original remains "Ram")
update(ram);         // Pass by Reference (original changes to "Kalu")
readOnly(ram);       // Pass by Const Reference (only reads data)
updatePtr(&ram);     // Pass by Pointer (modifies original)
```

🚀 **Use pass by reference (`&`) or pointer (`*`) when modifying the original struct!**
```