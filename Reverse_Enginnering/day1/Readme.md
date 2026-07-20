# Day 1: C Language Basics

> **Goal:** Learn the fundamentals of C programming and understand how to compile and run C programs on Linux (Pop!_OS).

---

# 📚 Topics Covered

- What is C?
- Why Learn C?
- Structure of a C Program
- Comments
- Variables
- Data Types
- Variable Naming Rules
- Format Specifiers
- printf()
- scanf()
- sizeof()
- Memory Basics
- Stack vs Heap
- How to Compile and Run C Programs
- Common Errors
- Commands Cheat Sheet
- Practice Questions

---

# What is C?

C is a **general-purpose programming language** developed by **Dennis Ritchie** in **1972** at Bell Labs.

C is widely used for:

- Operating Systems
- Embedded Systems
- Device Drivers
- Cybersecurity
- Reverse Engineering
- Game Engines

---

# Why Learn C?

Learning C helps you understand:

- How memory works
- How the CPU executes programs
- Operating Systems
- Pointers
- Memory Management
- Reverse Engineering

---

# Structure of a C Program

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    return 0;
}
```

## Explanation

### `#include <stdio.h>`

Includes the Standard Input Output library.

Used for:

- `printf()`
- `scanf()`

---

### `int main()`

Every C program starts execution from the `main()` function.

---

### `printf()`

Prints output to the screen.

Example

```c
printf("Hello, World!\n");
```

---

### `return 0;`

Indicates successful program execution.

---

# Comments

### Single-line Comment

```c
// This is a comment
```

### Multi-line Comment

```c
/*
This is
a multi-line
comment
*/
```

---

# Variables

Variables store data.

Syntax

```c
datatype variableName = value;
```

Example

```c
int age = 20;
float marks = 95.5;
char grade = 'A';
```

---

# Variable Naming Rules

✅ Valid

```text
age
studentName
_marks
count1
```

❌ Invalid

```text
1age
my-name
int
```

Rules:

- Cannot start with a number.
- Cannot contain spaces.
- Cannot use keywords.

---

# Data Types

| Data Type | Description | Example |
|-----------|-------------|---------|
| int | Integer | 20 |
| float | Decimal | 3.14 |
| double | High precision decimal | 3.141592653 |
| char | Single Character | 'A' |
| void | No value | Functions |

---

# Format Specifiers

| Data Type | Format Specifier |
|-----------|------------------|
| int | `%d` |
| float | `%f` |
| double | `%lf` |
| char | `%c` |
| string | `%s` |

Example

```c
printf("%d", age);
printf("%f", marks);
printf("%c", grade);
```

---

# sizeof()

Returns the size of a data type in bytes.

Example

```c
#include <stdio.h>

int main()
{
    printf("%lu\n", sizeof(int));

    return 0;
}
```

Output

```text
4
```

---

# Taking Input

Example

```c
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Age is %d\n", age);

    return 0;
}
```

Output

```text
Enter your age: 23
Age is 23
```

---

# Memory Basics

Every variable is stored in RAM.

Example

```c
int age = 20;
```

Memory

```text
Address      Value

1000         20
```

---

# Memory Layout

```text
+------------------------+
|        Stack           |
+------------------------+
|                        |
|         Heap           |
+------------------------+
|   Initialized Data     |
+------------------------+
| Uninitialized Data     |
+------------------------+
|      Program Code      |
+------------------------+
```

---

# Stack

Stores

- Local Variables
- Function Calls
- Function Parameters

Example

```c
int main()
{
    int x = 10;
    int y = 20;

    return 0;
}
```

Features

- Fast
- Automatic Memory Management
- Small Size

---

# Heap

Stores dynamically allocated memory.

Example

```c
int *ptr = malloc(sizeof(int));
```

Features

- Large Memory
- Manual Memory Management
- Must use `free()`

---

# Stack vs Heap

| Stack | Heap |
|--------|------|
| Automatic | Manual |
| Fast | Slower |
| Small | Large |
| Local Variables | Dynamic Memory |
| Auto Deleted | Must call `free()` |

---

# How to Compile and Run a C Program (Linux / Pop!_OS)

## Step 1: Check GCC Installation

```bash
gcc --version
```

If GCC is not installed

```bash
sudo apt update
sudo apt install build-essential
```

---

## Step 2: Open the Project Folder

Example

```text
Reverse_Engineering/
└── day1/
    ├── hello.c
    ├── input.c
    ├── memory.c
    └── README.md
```

---

## Step 3: Open Terminal

Shortcut

```text
Ctrl + `
```

or

```text
Terminal → New Terminal
```

---

## Step 4: Check Current Folder

```bash
pwd
```

Example

```text
~/Developer-HUB/Reverse_Engineering/day1
```

List files

```bash
ls
```

Output

```text
hello.c
input.c
memory.c
README.md
```

---

## Step 5: Compile

Compile hello.c

```bash
gcc hello.c -o hello
```

Compile input.c

```bash
gcc input.c -o input
```

Compile memory.c

```bash
gcc memory.c -o memory
```

General Syntax

```bash
gcc filename.c -o filename
```

---

## Step 6: Run

Run hello

```bash
./hello
```

Run input

```bash
./input
```

Run memory

```bash
./memory
```

General Syntax

```bash
./filename
```

---

# Common Errors

## Error

```text
fatal error: hello.c: No such file or directory
```

Reason

You are in the wrong folder.

Fix

```bash
pwd
ls
```

Move to the correct folder.

---

## Error

```text
bash: ./hello: No such file or directory
```

Reason

Executable was not created.

Fix

Compile first.

```bash
gcc hello.c -o hello
```

Then run.

```bash
./hello
```

---

## Error

```text
gcc: command not found
```

Fix

```bash
sudo apt install build-essential
```

---

## Error

Output looks like

```text
Age is 23Abishek@Linux...
```

Reason

Missing newline (`\n`).

Wrong

```c
printf("Age is %d", age);
```

Correct

```c
printf("Age is %d\n", age);
```

---

## Error

Wrong executable name

Wrong

```bash
gcc input.c -o memory
./input
```

Correct

```bash
gcc input.c -o input
./input
```

---

# Commands Cheat Sheet

Check GCC

```bash
gcc --version
```

Compile

```bash
gcc filename.c -o filename
```

Run

```bash
./filename
```

Current Folder

```bash
pwd
```

List Files

```bash
ls
```

Go to Folder

```bash
cd folder_name
```

---

# Day 1 Summary

Today I learned:

- ✅ Introduction to C
- ✅ Program Structure
- ✅ Comments
- ✅ Variables
- ✅ Data Types
- ✅ printf()
- ✅ scanf()
- ✅ sizeof()
- ✅ Format Specifiers
- ✅ Memory Basics
- ✅ Stack vs Heap
- ✅ GCC Compiler
- ✅ Compile and Run Programs
- ✅ Common Errors and Fixes

---

# Practice Questions

1. Print "Hello, World!"
2. Create variables for age, height, and grade.
3. Take user input using `scanf()`.
4. Print the size of `int`, `float`, `double`, and `char`.
5. Explain the difference between Stack and Heap.
6. Compile and run three different C programs.

---

# Next Topic (Day 2)

- Operators
  - Arithmetic Operators
  - Relational Operators
  - Logical Operators
  - Assignment Operators
  - Increment and Decrement Operators
- Expressions
- Type Casting
- Operator Precedence