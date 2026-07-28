# Introductions to Algorithms:

An algorithm it's a step by step procedure fro solving computational problems.

**Diferences with a program:**

| Algorithm                     | Program              |
| ----------------------------- | -------------------- |
| Desing                        | Implementation       |
| Domain Knowledge              |                      |
| Any language                  | C++/C,Java,JS,etc    |
| Independent of HW/OS          | Dependend of HW/OS   |
| Analyze (Time/space Function) | Testing (Time/Bytes) |

##### Characteris:

- Input
- Output
- Specific definitions
- Finitess is the state of being limited or having an end.
- Efectiveness

#### Time Complexity Funcitons:

```c++
for(int i=0; i<n; i++)  // -- O(n)
for(int i=0; i<n; i+2)  // -- O(n)
for(int i=n; i>1; i--) // -- O(n)

for(int i=0; i<n; i=i*2) // -- O(log(n))
for(int i=0; i<n; i=i*3) // -- O(log3(n))
for(int i=0; i<n; i=i/2) // -- O(log(n))
for(int i=0; i*i<n; i++) // -- O(root(n))
```
