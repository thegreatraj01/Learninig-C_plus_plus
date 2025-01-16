### Write Hello World 
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;  // Print message and move to a new line
    return 0;
}
```
-----
```
#include <iostream>
```
- **Preprocessor Directive**: This line tells the compiler to include the iostream library, which is necessary for input and output operations in C++.
- The iostream library provides functionalities for reading from and writing to the console.

```cpp
using namespace std;
```
- **Namespace Declaration**: This line allows the program to use all the components from the std (standard) namespace without needing to prefix them with std::.
- Without this line, you would need to write std::cout and std::endl instead of simply cout and endl.


```cpp
int main() {
```
- **Main Function**: This is the entry point of the program. The program execution starts here.
- The `int` before `main` indicates that the function returns an integer value, commonly used to indicate the status of the program (e.g., `return 0;` for successful completion).

```cpp
    cout << "Hello world!" << endl;
```
- **Output Statement**:
  - `cout`: This is an object in C++ used to display output to the console.
  - `<<`: This is the stream insertion operator. It sends the data on the right (in this case, `"Hello world!"`) to the output stream (which is the console).
  - `"Hello world!"`: This is the string that will be displayed on the screen.
  - `<< endl`: The `endl` is a manipulator that inserts a newline character and flushes the output buffer. This means after printing `"Hello world!"`, the cursor moves to the next line. Flushing ensures that all output is displayed immediately.

```cpp
}
```
- **Closing Bracket**: This marks the end of the `main()` function.

### Full Explanation:
When the program is executed:
1. It includes the necessary library (`<iostream>`) to handle input and output operations.
2. It uses the **std** namespace to simplify the code by not needing to prefix standard library components with `std::`.
3. It runs the `main()` function, which contains a line to print `"Hello world!"` to the screen followed by a newline (`endl`).
4. After printing, the program terminates.

### Expected Output:
```
Hello world!
```
- The string `"Hello world!"` is displayed, followed by moving the cursor to the next line because of `endl`.
