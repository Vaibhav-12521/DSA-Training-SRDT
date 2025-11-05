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

### Dry Run

| Step | Operation  | Condition Checked   | Action Taken               | `top` After | Stack Content (`[0] [1] [2] [3] [4]`) | Output                |
| ---- | ---------- | ------------------- | -------------------------- | ----------- | ------------------------------------- | --------------------- |
| 1    | `push(10)` | `top == 4 → false`  | `top = 0`, `stack[0] = 10` | 0           | [10, _, _, _, _]                      | `Pushed 10 to stack`  |
| 2    | `push(20)` | `top == 4 → false`  | `top = 1`, `stack[1] = 20` | 1           | [10, 20, _, _, _]                     | `Pushed 20 to stack`  |
| 3    | `push(30)` | `top == 4 → false`  | `top = 2`, `stack[2] = 30` | 2           | [10, 20, 30, _, _]                    | `Pushed 30 to stack`  |
| 4    | `pop()`    | `top == -1 → false` | `popele = 30`, `top = 1`   | 1           | [10, 20, 30, _, _]                    | `poped Element is 30` |
| 5    | `pop()`    | `top == -1 → false` | `popele = 20`, `top = 0`   | 0           | [10, 20, 30, _, _]                    | `poped Element is 20` |
| 6    | `pop()`    | `top == -1 → false` | `popele = 10`, `top = -1`  | -1          | [10, 20, 30, _, _]                    | `poped Element is 10` |

---

### 🧾 **Final Output**

```
Pushed 10 to stack
Pushed 20 to stack
Pushed 30 to stack
poped Element is 30
poped Element is 20
poped Element is 10
```


