### 🧩 Code Overview

Creating a simple **singly linked list** of 3 nodes:

```
n1 -> n2 -> n3 -> NULL
```

Each node stores an `age` and a pointer to the next node.

---

### 🧠 Step-by-Step Dry Run

#### **1️⃣ Memory allocation**

```c
struct Node* n1 = malloc(...);
struct Node* n2 = malloc(...);
struct Node* n3 = malloc(...);
```

* Three memory blocks are created on the heap:

  ```
  n1 | age | next |
  n2 | age | next |
  n3 | age | next |
  ```

#### **2️⃣ Assign values**

```c
n1->age = 12;
n2->age = 13;
n3->age = 14;
```

Now each node holds:

```
n1: age = 12
n2: age = 13
n3: age = 14
```

#### **3️⃣ Link the nodes**

```c
n1->next = n2;
n2->next = n3;
n3->next = NULL;
```

Now the list looks like:

```
n1 (12) → n2 (13) → n3 (14) → NULL
```

#### **4️⃣ Traverse and print**

```c
struct Node* head = n1;
while (head != NULL) {
    printf("Age: %d\n", head->age);
    head = head->next;
}
```

Let’s walk through the loop:

| Iteration | `head` points to | Output printed | `head` after iteration |
| --------- | ---------------- | -------------- | ---------------------- |
| 1         | n1 (age 12)      | Age: 12        | n2                     |
| 2         | n2 (age 13)      | Age: 13        | n3                     |
| 3         | n3 (age 14)      | Age: 14        | NULL                   |
| 4         | NULL             | loop ends      | —                      |

---

### 🖨️ Output

```
Age: 12
Age: 13
Age: 14
```

---

### 🧹 Memory cleanup

Finally:

```c
free(n1);
free(n2);
free(n3);
```

This releases the allocated memory back to the system.

---


