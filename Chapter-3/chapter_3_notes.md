# Chapter 3 - Formatted Input/Output

## 3.1 The **`printf`** Function

- The `printf` function is designed to display the contents of a string, known as the **format string**, with values possibly inserted at specified points in the string.

- The format string may contain both ordinary characters and **conversion specifications**, which begin with the % character. The information that follows % character specifies how the value is converted from its internal form to printed form- thats where the term "conversion specifications" comes from.

- C compilers are not required to check that the number of conversion specification in a format string matches the number of output items.

### Conversion Specifications

- Conversion specifications give the programmer a great deal of control over the apperance of output. On the other hand, they can be complicated and hard to read.

- A conversion specification can have the form %m.pX or %-m.pX, where m and p are integer constants and X is a letter. Both ma nd p are optional: if p is omitted, the period that seperates ma nad p is also dropped.

- The minimum field width, m, specifies the minimum number of characters to print. If the value to be printed requires fewer m characters, the value is right justified within the field. Putting a minus sign in front of m causes left justification.

- The most common conversion specifiers for numbers are:
	
	- `d`: Displays an integer in decimal base.
	- `e`: Displays a floating-point number in exponential format. p indicates how many digits should appear after the decimal point.
	- `f`: Displays a floating-point number in "fixed decimal" format without an exponent.
	- `g`: Displays a floating point number in either exponential format or fixed decimal format, depending on the number's size.

### Escape Sequences

- The `\n` code we often use in format strings is called an escape sequence. Escape sequences enable strings to contain characters that would otherwise cause problems for the compiler.

- Printing `\a` causes an audible beep, Printing `\b` moves the cursor back one position, `\n` advances the cursor to the begining of the nextline, Printing `\t` moves the cursor to the next tab stop.

- Another common escape sequence is `\"`, which represent the `"` character.We can't just put a single `\` character in a string; the compiler will asume that it's the begining of an escape sequence. To print a single `\` character, put two `\` character in the strings.

## 3.2 The **`scanf`** Function

- Just as `printf` prints output in a specified format, `scanf` reads input according to a particular format. A `scanf` format string, like a printf format string, may contain both ordinary characters and conversion specifications.

- In many casses, a `scanf` format string will contain only conversion specifications, as in the following example:

```C
int i,j;
float x,y;

scanf("%d%d%f%f", &i, &j, &x, &y);
```

- `scanf` will read the line, converting its character to the numbers they represent, and then assign the inputs to i, j, x and y, respectively. When using scanf, the programmer must check the number of conversion specifications matches the number of input variables and each conversion is appropriate for the coressponding variable.

- calling `scanf` is a powerful but unforgiving way to read data. Many professional C programmers avoid scanf, instead reading all data in character form and converting it to numeric form later.

### How **`scanf`** Works

- When it is called, `scanf` begins processing the information in the string, starting at the left. For each conversion specification in the format string, **scanf** tries to locate an item of the appropriate type in the input data, skipping blank space if necessary.


