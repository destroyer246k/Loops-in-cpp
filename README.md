# Loops-in-cpp
Aim: To study and implement different types of loops in C++

Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler)

# Theory

Loops in C++ are useful to **replicate a block of code** over and over again until a certain condition is false. Loops will also allow you to automate repetitious tasks, eliminate redundancies in your code, and allow you to manage iterations to process a group of data efficiently. Two common loops that can be visited for these actions are **for loop** and **while loop**.

## for Loop

Use the **for loop** when you know the **number of iterations ahead of time**. It is contains **three parts** as part of the declaration of a for loop: 
```
for(initialization; condition; increment/decrement) {
    // code to be repeated
    }
```
- **Initialization**: provides a starting value for the loop control variable
- **Condition**: the loop will execute only while this statement is true
- **Increment/Decrement**: updates the control variable after each iteration

The for loop is neat and clean and well-suited for **counts controlled iterations**, such as writing a sequence, summing numbers, and traversing an array.

## while Loop

The **while loop** is useful when the **number of iterations are unknown ahead of time** and you want the loop to continue to execute as long as some condition remains true. 
```
while(condition) {
// code to be repeated
}
```
- Each iteration checks the condition **before running the code** within the loop.
- If the condition is false at the first check, the loop body may not execute or be traversed at all.It repeats untill condition is updated to **false** in while loop.
## Nested for Loop in C++

A nested for loop is just a loop inside another loop. A nested for loop is appropriate when you have an action that has to be repeated inside a multi-level structure, like if you are dealing with grids or patterns.

### Syntax

```cpp
for(initialization1; condition1; update1) {
    for(initialization2; condition2; update2) {
        // inner loop statements
    }
    // outer loop statements
}
```
## Pattern Printing in C++
Pattern printing in C++ involves using nested loops to display output in structured shapes using characters, numbers, or symbols.

## Types of Patterns

- Simple Triangle
- Inverte Triangle
- Flipped Simple Triangle
- Flipped Inverted Triangle
- Pyramid Pattern
- Hour Glass
- Inverted Pyramid Pattern
- Half Diamond Pattern
- Inverted Number Triangle
- Floyd’s Triangle
- Character Triangle
- Diamond Pattern


## Program 1 For Loop: Print Even Numbers up to 10    
In this program, we will print the even numbers from 0 to 10 using a **for loop**, which will iterate from 0 to 10. The **if statement** will check to see if the number is divisible by 2.

**Algorithm:**
1. **Start**
2. Let i = 0.
3. Repeat while i <= 10:
   - If i % 2 == 0, Print(i).
   - Let i = i + 1. 
4. **Stop**


## Program 2 For Loop: Print "SIT" 5 times.  
**Explanation:**  
In this program, we will print the word "SIT" using a **for loop** that runs from 0 to 4, and then repeats the process five times.

**Algorithm:**
1. **Start**
2. Let i = 0.
3. Repeat while i < 5:
   - Printing "SIT".
   - Let i be i + 1. 
4. **Stop**


## Program 3 While Loop: Print 1 to 20.  
**Explanation:**  
In this program, we will use a **while loop** to print from 1 to 20. The process will start from 0 and increment to 20.

**Algorithm:**
1. **Start**
2. Let n = 0.
3. While n < 20:
   - Let `n++;`(n = n + 1).
   - Print n.
4. **Stop**

## Program 4 While Loop: Password Checker
**Explanation:**  
This program sets a password (minimum of 8 characters), confirms the password, and then allows the user to check the password repeated or exit by entering `'x'`.

**Algorithm:**
1. **Start**
2. Prompt the user to enter a password.
3. If password length < 8, prompt again.
4. Prompt to confirm password.
5. If not matching, prompt again.
6. When confirmed, enter verification loop:
   - Prompt user to enter password, or enter `'x'` to exit.
   - If password matches, print "Access Granted".
   - If `'x'`, print "Exited"; **Stop**.
   - Else, print "Wrong Password".
   - loop repeats untill x is entered.



## Program 5 While Loop: Reverse an Entered Number
**Explanation:**  
The program reverses the number simply by taking digits from the last and printing them in reverse order we use %(Modulus) to get last digit and /(division) to update entered number.

**Algorithm:**
1. **Start**
2. Input number.
3. While number != 0
   - Get last digit using number % 10.
   - Print the digit.
   - Floor divide number by 10.
4. **Stop**
