### ▶️ **Step-by-Step Dry Run**

#### **Step 1:** `main()` starts

Execution begins at:

```c
push(10);
```

The function `push()` is called with `element = 10`.

---

#### **Step 2:** Enter `push()`

Now we are inside:

```c
void push(int element)
```

Parameter:

```
element = 10
```

Check condition:

```c
if(top == MAXSIZE - 1)
```

Substitute values:

```
if(-1 == 4) → false
```

Since the condition is false, we go to the **else** block.

---

#### **Step 3:** Execute else block

```c
top++;
```

→ `top = -1 + 1 = 0`

Now:

```
top = 0
```

Next:

```c
stack[top] = element;
```

→ `stack[0] = 10`

Stack now looks like:

| Index | 0  | 1 | 2 | 3 | 4 |
| ----- | -- | - | - | - | - |
| stack | 10 | ? | ? | ? | ? |

---

#### **Step 4:** Print message

```c
printf("Pushed %d to stack\n", element);
```

Prints:

```
Pushed 10 to stack
```

---

#### **Step 5:** `push()` ends

Control returns to `main()`.

---

#### **Step 6:** `main()` ends

Program execution finishes normally.

---

### 🖥️ **Program Output**

```
Pushed 10 to stack
```

---

### 🧩 **Final Values**

| Variable      | Value         |
| ------------- | ------------- |
| `top`         | `0`           |
| `stack[0]`    | `10`          |
| `stack[1..4]` | Uninitialized |
| `MAXSIZE`     | `5`           |

---

✅ **Summary**

* The element `10` was successfully pushed.
* No overflow (stack not full).
* Final stack top = 0, holding one element.
