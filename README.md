# ELEC2645 Unit 1.2 Activity 5 - Enum and Switch

In this exercise we will look at two `C` concepts that are often found together `enum` and `

- `enum`: An enum (enumeration) is a user-defined type in `C` that consists of a set of named integer constants. It helps make code more readable by giving meaningful names to values. This avoids us having to remember "`1` means `x` and `2` means `y`" etc. 

```c
// definite the constants, by default the numbering starts at 0 and increments (i.e. RAMEN is 2)
enum Noodles {SOBA, UDON, RAMEN}; 
// you can now create new variables of type Noodles, which can *only* be those defined in the enum
enum Noodles dish = SOBA;

// if we tried this the compiler would give an error
dish == HARUSAME; 
```

- `switch`: The switch statement is a control structure that allows you to execute different code blocks based on the value of a variable. It’s often used with enums to handle multiple cases clearly, when nested `if` statements become too complicated.

```c
// rather than having lots of nested if statements like if (dish == SOBA) ... 

switch (dish) {
  case SOBA:
    printf("I love Soba");
    break;
  case UDON:
    printf("Kitsune is the best tbh");
    break;
  case RAMEN:
    printf("Tonkotsu is my fav");
    break;
}
```


### 1 Run code
The program `main.c` needs compiling before it can run. In the terminal you can type `gcc main.c -o main.out` and then `./main.out` to run the new program.

### 2 The assignment
Write a grade checker which takes a single integer as input, and outputs the correct grade. 

| Grade Range   | Output Text             |
|--------------|-------------------------|
| 0 - 50       | Grade: Fail :(          |
| 51 - 59      | Grade: Pass :|          |
| 60 - 69      | Grade: Merit :)         |
| 70 - 100     | Grade: Distinction :D   |
| <0 or >100   | Invalid grade :?        |

- First update the `enum` and the grade marks, then set the variable `currentGrade` based on the input score
- Using  a `switch` statement, print out the correct text based on the grade range in the table above
- Test out a few different options yourself before running the test script

### 3 Test command
In the terminal run `make test` which will build `main.c` to create `main.out` (if not done already) and then it will run the test script `test.sh`. These instructions are defined in the `Makefile`. If your code is correct you should see `-d[o_0]b All tests passed :D`

### 4 Submit Solution
Once you have solved the task, you must submit the changes so the autograder runs. To do this you must commit changes and then publish them to the repository. 

To do this:
- Switch to `Source Control` tab on the left hand side
- Stage the files you have changed by clicking `+` by each file, this is normally just the `.c` code files you have changed. Or stage all files by `+` at the top of the list
- Type a _meaningful_ commit message in the text box then hit `Commit`
- Hit `Sync Changes` to send updates to to the remote repository on GitHub. If the green button does not change to `Sync Changes` you can still submit hitting the `...` just above the message box and selecting `Push`
- The autograder will run in the background, you can check the results on the repository page. 
- You can find the link to the repository page either from the original GitHub classroom invite link, or by switching back to the `Explorer` tab, right click in the blank space under all of the files and then selecting `share` then `Copy github.dev Link`  
