# **Clean C++ Code**
welcome to the Clean C++ Code repository!

## Introduction
This code simply cleans up your code, meaning:
1. If there are comments they will be removed,  whether it's a single comment (e.g. : `//`) or a block comment (e.g.: `/* */`).
2. If there are any blank lines or lines consists of spaces they will be removed.
   
   
- [ ] **Before** 
```c++
/*
    I'm a block comment and you must remove me :(
*/


#include <iostream>
using namespace std;
// I'm a single comment and you must remove me =(

int main() {

int a, b;

cin » a » b; // Hello i'm still here (￣o￣). z Z
cout « a * b « '\n';

// End of the program (remove me please X_X ) 
return 0;

}
```

- [X] **After**
```c++
#include <iostream>
using namespace std;
int main() {
int a, b;
cin » a » b; 
cout « a * b « '\n';
return 0;
}
````
---
## Complexity
* **Time complexity:** O(L * n)
* **Space complexity:** O(n)  
  
***note:***  
L => Numbers of line.  
n => length of the line.