# object-pointer--cpp
# C++ OOPs: This Pointer and Object Pointer

## Introduction

This project demonstrates the use of the **`this` pointer** and **object pointers** in C++.

A `cricketer` class is created to store information such as the player's name, runs, and batting average. The program then uses a pointer to access and modify the object's data.

## Concepts Used

* Class and Object
* Constructor
* `this` Pointer
* Object Pointer
* Pointer Dereferencing
* Member Access
* Data Members

## Class: Cricketer

The `cricketer` class contains three data members:

* **name** – stores the cricketer's name.
* **runs** – stores the total runs.
* **avg** – stores the batting average.

## Constructor

The constructor initializes the values of the object.

The `this` pointer is used to distinguish between the class data members and constructor parameters.

For example:

```cpp
this->name = name;
this->runs = runs;
this->avg = avg;
```

Here, `this->name` refers to the object's data member, while `name` refers to the constructor parameter.

## Object Creation

An object named `c1` is created with:

* Name: Virat Kohli
* Runs: 25000
* Average: 55.7

## Object Pointer

A pointer `p1` is created to store the address of the object:

```cpp
cricketer* p1 = &c1;
```

The pointer can then be used to access the object's members.

### Using `(*p1)`

```cpp
cout << (*p1).avg << endl;
```

This accesses the `avg` member through the pointer.

Similarly:

```cpp
(*p1).runs = 24000;
```

changes the `runs` value of the original object.

The same can also be written using the **arrow operator**:

```cpp
p1->runs = 24000;
```

## Expected Output

```text
55.7
24000
```

## Key Learning

This program shows that:

* `this` points to the current object.
* A pointer can store the address of an object.
* `(*pointer).member` can access an object's member.
* `pointer->member` is a shorter way to access the same member.
* Changes made through the object pointer affect the original object.

## Conclusion

This program provides a basic understanding of **pointers with objects in C++** and demonstrates how the `this` pointer works inside a constructor. These concepts are important for understanding memory, dynamic objects, and advanced OOPs in C++.
