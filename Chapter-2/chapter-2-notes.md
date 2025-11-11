# Chapter 2 - C Fundamentals

## 2.1 Writing a Simple Program

- In contrast to other programig language, C programs require little boilerplate

- The first program in K&R is printing `Hello, World`. We are going to write a bad pun instead of following K&R.

```C
#include <stdio.h>

int main (void)
{
	printf("To C or not to C: that is the question.\n");
	return 0;
}
```

`#include <stdio.h>`

- It is necessary to "include" information about C'c standars I/O library.

- The program executable code goes inside main, which represents the "main" program.

- The only line inside main is to dispay the desired message.

- `printf` is a function from standard I/O library that can produce formatted output.

- the `\n` code tells printf to advance to the next line after printing.

- the line `return 0;` indicates that the program "returns" the vale 0 to the operating system when it terminates.

### Compiling and Linking

- To run a C code we need to create a file named `pun.c` containing the program. The name does not matter, but .c extension is required by the compilers.

- Now we have to convert the program to a form that machine can execute. For a C program, That usualy involve three steps:

	- Preprocessing:- The program is first given to a ***preprocessor***, which obeys commands that begin with `#`. A preprocessor is a bit like an editor; it can add things to the program and make modifications.

	- Compiling:- The modified program now goes to a ***compiler***, which translates it into machine instructions (object code). This is not yet ready to run yet.

	- Linking:- In the final step,a ***linker*** combines the object code with any additional code needed to yield a complete executable program. This additional code includes library functions that are used in the program.

- The process is automated, The preprocessor is usually integrated with the compiler, so we won't even notice.

- The commands necessary to compile and link vary depending on the compiler and operating system.

## 2.2 The General Form of a Simple Program

- Simple C programs have the form

```C
directives

int main(void)
{
	statements
}
```

- The braces show where `main` begins and ends. C uses { and } in much the same way that other languages use words like ***begin*** and ***end***.

- Even the simplest C program rely on three key language features: **`directives`** (editing commands that modify the program prior to compilation), **`functions`** (named blocks of executable code, of which `main` is an example), and statements (commands to be performed when the program is run).

### Directives

- Befor a C program is compiled, it is first edited by preprocessor. Commands intended for the preprocessor are called directives.

- The pun.c program begins with the line **`#include <stdio.h>`**.

- This directive states that information in **`<stdio.h>`** is to be included into the program before it is compiled.

- **`<stdio.h>`** contains information about C's standard I/O library. C has a number of ***headers*** like ***<stdio.h>***: each contains some part of the standard library. The reason we are including`<stdio.h>` is that C does not have in built "read" and "write" commands.

- The directives always start from **`#`** character. By default, directives are one line long and there's no semicolon or any other special marker at the end of the directive.

### Functions

- Functions are like procedures or subroutines in other programming language. A C program is little more than a collection of functions. Functions fall into two types: those written by programmer and those provided as part of the C implementation reffered to as library function.

- In C a function is simply a series of statements that have been grouped together and given a name. Some functions compute a value; some don't. A function that computes a value uses that return statement to specify what value it returns.

-- A C program can have many functions, only the `main` function is mandatory. `main` is special: it gets called automatically when the program is executed.

- The word `int` just before `main` indicates that the function returns an integer value. The word `void` inside the parentheses indicates that `main` has no argument.

- The statement **`return 0;`** has two effects: it causes the main function to terminate  and it indicates the main function returns a value of 0.

### Statements

- a ***statement*** is a command to be executed when the program runs. C requires each statemnt to end with semicolon. The semicolon shows the compiler where the statements ends.

### Printing Strings

- **`printf`** is a powerful function to display a string litreal. It does not automatically advance to the next output line when it finishes printing.

## 2.3 Comments

- Every program should contain identifying information: the program name. the date written, the author, the purpose of the program, and so forth. This information is place in `comments`. The symbol `/*` marks the beginning of a comment and the symbol `*/` marks the end:

**`/* This is a comment */`**

- The comments may extend over more than one line; once it has seen the comment starting symbol the compiler reads and ignores whatever follows until it encounters the end symbol of comments.

- The C99 provides a second kind of comment which begins with `//`. This style of comment ends autoatically at the end of a line.

## 2.4  Variables and Assignment

- Few programs are simple as pun.c. Most programs need to pr=erform a series of calculation before producing output, and thus the need a way to store data temporarily during program execution. These storage locations are called variables.

### Types

- Every variable maust have a **type**, which specifies what kind of data it holds. C has a wide variety of types. For now let us use two: **`int`** and **`float`**.

- Choosing the proper type is very important, since the type affects how the variable is stored and what operations can be done on the variables. The type of a numerical variable determines whether or not digits are allowed after the decimal point.

- A variable of type `int` can store a whole number such as 0, 1, -256. The range of possible values is limited. The largest int value is typically 2,147,483,647 but can be as small as 32,767.

- a variable of ype `float` can store much larger numbers than an `int` variable. A `float` can store numbers with digits after decimal point. The value of a float variable is often just an approximation of the number that was stored in it.

### Declarations

- Variables must be declared before they can be used. To declare a variable, we first specify the type of the variable, then its name. for example

```	
int height;
float profit;
```

- The first declaration states that **height** a a variable of type `int`, meaning that it can store only integer value. The second variable is a type ofloat. If several variables have the same type, their declarations can be combined.

- When main contains declarations, these must precede statements.

```C
int main(void)
{
	declarations
	statements
}
```

### Assignment

- A variable can be given a value by means of **`assignment`**. 

```
height = 8;
length = 12;
width =10;
```
- For example the above statements assign values to height, length and width. Before a variable can be assigned a value- or used in any other way, for that matter - it must first be declared.

- a **constant** assigned to a float variable usually contains a decimal point.

### Printing the Value of a Variable

- We can use `printf` to display the current value of a variable. For example:- 
```printf("Height: %d\n",height);```

- `%d` is a placeholder indicating where the value of height is to be filled during printing. `%d` only works for int variables, To print a float variable we'd use `%f` instead. By default `%f` displays a number with six digits after decimal point.

- To force `%f` to display **p** digits after decimal point, we can put `.p` between % and f.

### Initialization

- Some variables are automatically set to zero when a program begins to execute, but most are not. A variable does not have a default value. Attempting to access the value withouth initialization may yield a garbage value.

### Printing Expression

- `printf` isn't limited to displaying numbers stored in variables; it can display the value of any numeric expression.

## 2.5 Reading Input

- Because `dweight.c` calculates the dimensional weight of just one box, Its not especially useful. To improve , we will need to allow users to input the dimensions.

- To obtain input, we will use **`scanf`** function, counterpart to `printf`.`scanf` needs to know what form the input data will take. To read **int** value we use `scanf` as follows:

```scanf("%d",&i);```

- the `%d` string tells the `scanf` to read input that represents an integer: i is an int variable into which we want scanf to store the input.

- Reading  a float value requires slightly different `scanf`:

```scanf("%f",&x);```

- `%f` works only with variables of type **float**. The **%f** tells scanf to look for an input value in float format(The number may contain a decimal point, but does not have to).

## 2.6 Defining Names for Constants

- When a program contains constants, its often good to give names. The dweight.c and dweight2.c programs rely on the constant 166, whose meaning may not be all clear to someone reading  the program later. 

- Using a feature known as ***`macro definition`***, we can name this constant:

```#define INCHES_PER_POUND 166```

- **`#define`** is preprocessing directive just as **`#include`** is, so when a program is compiled, the preprocessor replaces each macro by the value that it represents.

- If it contains operators; the expression should be enclosed in parentheses. C programers follow the convention of making the names uppercase for macro definiton.

## 2.7 Identifiers

- As we are writing a program we have to choose a name variables, functions, macro's, etc. These names are called as identifiers. An identifier can have numbers,underscore and letters.

- Identifiers cannot start from numbers, but they can start from letters or an underscore. C is also an case sensitive language. Many programmers use only lowercase letters in variables, with underscores inserted when necessary for legibility.

- Other programmers avoid underscores instead capitalize each word within an identifier.

## 2.8 Layout of a C Program

- Statements can be divides over any number of lines
- Space between tokens make it easier for the eye to seperate them.
- Indentation can make nesting easier to spot
- Blank lines can divide a program into logical units, making it easier for the reader to discern the program's structure.


