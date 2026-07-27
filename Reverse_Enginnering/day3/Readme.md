# Conditional Statements in C

Conditional statements are used in C programming to make decisions based on whether a condition is **true** or **false**.

---

## 1. `if` Statement

The `if` statement executes a block of code only when the condition is true.

### Syntax

```c
if (condition) {
    // code to execute
}
```

### Example

```c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are eligible to vote");
    }

    return 0;
}
```

---

## 2. `if...else` Statement

The `if...else` statement is used when there are two possible outcomes.

### Example

```c
#include <stdio.h>

int main() {
    int age = 16;

    if (age >= 18) {
        printf("Eligible to vote");
    } else {
        printf("Not eligible to vote");
    }

    return 0;
}
```

---

## 3. `if...else if...else` Statement

Used when there are multiple conditions to check.

### Example

```c
#include <stdio.h>

int main() {
    int mark = 85;

    if (mark >= 90) {
        printf("Grade A");
    } else if (mark >= 75) {
        printf("Grade B");
    } else if (mark >= 50) {
        printf("Grade C");
    } else {
        printf("Fail");
    }

    return 0;
}
```

### Flow

```text
Condition 1?
    |
   Yes → Execute Code 1
    |
   No
    ↓
Condition 2?
    |
   Yes → Execute Code 2
    |
   No
    ↓
Condition 3?
    |
   Yes → Execute Code 3
    |
   No
    ↓
Execute else block
```

---

## 4. Nested `if` Statement

A nested `if` is an `if` statement inside another `if` statement.

### Example

```c
#include <stdio.h>

int main() {
    int age = 20;
    int has_id = 1;

    if (age >= 18) {
        if (has_id == 1) {
            printf("You can enter");
        }
    }

    return 0;
}
```

---

## 5. `switch` Statement

The `switch` statement is used when you need to choose between multiple fixed values.

### Example

```c
#include <stdio.h>

int main() {
    int choice;

    printf("Enter 1 or 2: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected One");
            break;

        case 2:
            printf("You selected Two");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
```

### Important

* `case` → Defines a possible value.
* `break` → Stops execution of the switch.
* `default` → Runs when no case matches.

---

## 6. Conditional (Ternary) Operator `?:`

The ternary operator is a short way to write a simple `if...else` statement.

### Example

```c
#include <stdio.h>

int main() {
    int age = 20;

    age >= 18 ? printf("Adult") : printf("Minor");

    return 0;
}
```

### Equivalent `if...else`

```c
if (age >= 18) {
    printf("Adult");
} else {
    printf("Minor");
}
```

---

# Comparison Table

| Conditional Statement | Purpose                               |
| --------------------- | ------------------------------------- |
| `if`                  | Checks a single condition             |
| `if...else`           | Handles two possible outcomes         |
| `if...else if...else` | Handles multiple conditions           |
| Nested `if`           | An `if` statement inside another `if` |
| `switch`              | Selects between multiple fixed values |
| Ternary `?:`          | Short form of `if...else`             |

---

# Common Comparison Operators

| Operator | Meaning                  | Example  |
| -------- | ------------------------ | -------- |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |

---

# Logical Operators

Logical operators are used to combine multiple conditions.

| Operator | Meaning | Example                    |    |            |   |                      |
| -------- | ------- | -------------------------- | -- | ---------- | - | -------------------- |
| `&&`     | AND     | `age >= 18 && has_id == 1` |    |            |   |                      |
| `        |         | `                          | OR | `age >= 18 |   | has_permission == 1` |
| `!`      | NOT     | `!is_valid`                |    |            |   |                      |

### Example

```c
if (age >= 18 && has_id == 1) {
    printf("Access granted");
}
```

In this example, **both conditions must be true**.

---

# Learning Order

Learn conditional statements in this order:

1. `if`
2. `if...else`
3. `if...else if...else`
4. Nested `if`
5. `switch`
6. Ternary operator `?:`
7. Comparison operators
8. Logical operators
