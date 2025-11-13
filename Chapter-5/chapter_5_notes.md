# Chapter 5 - Selection Statements

- Although C has many operators, it has relatively few statements. We have seen only two so far: the return statement and the expression statement. C's remaining statements fall into three categories, depending on how they affect the order in which satements are executed:

	- **`Selection Statements`**. The **`if and switch`** statements allow a  program to select a particular execution path from a set of alternatives.

	- **`Iteration statements`**. The **`while,do, and for`** statements support iteration (looping).

	- **`Jump statements`**. The **`break,continue and goto`** statements cause an unconditional jump to some other place in the program (return also belongs to the same category.)

- The only other statements in C are compound statement, and the null statement.

## 5.1 Logical Expression

- Several of C's statement, including the `if` satement, must test the value of an expression to see if its **"true"** or **"false"**.

### Relational Operators

- C's relational operator correspond to < , >, etc operators of mathematics, except that they produce 0(false) or 1(true) when used in expression.

|symbol	|Meaning|
|------	|-------|
|<	|less than	|
|>	|greater than	|
|<=	|less than or equal to	|
|>=	|greater than or equal to	|


- The relational operators can be used to compare integers and floating point numbers, with operands of mixed types allowed. The precedence of the relational operators is lower than that of the arithmetic operators. the relational operators are left associative.

### Equality Operators

- Although The relational operators are denoted by the same symbols as in many other programming languages, the **equality operators** have a unique appearance. The **equal to** operator is two adjacent `=` characters.


|Symbol	|Meaning	|
|-------|---------------|
|==	|equal to	|
|!=	|not equal to	|

- Like the relational operators, the equality operators are left associative and produce either 0 or 1 as their result. However, the equality operators have lower precedence than relational operators.

### Logical Operators

- More complicated logical expression can be built from simpler ones by using the **logical operators**: and, or and not. not is an unary operator.


|Symbol	|Meaning	|
|-------|---------------|
|!	|logical negation	|
|&&	|logical and	|
|\|\| 	|logical or	|

- The logical operator produce either 0 or 1 as their result. Often the operands will have values of 0 or 1, but this is not a requirement: The logical operator treat any non zero operand as a false value.

- The logical operators behave as follows:

	- **`!expr`** has the value 1 if expr has the value 0.

	- **`expr1 && expr2`** has the value 1 if the values of expr1 and expr2 are both non zero.

	- **`expr1 || expr2`** has the value 1 if either expr1 or expr2 has a non zero value.

- Both `&&` and `||` perform short-circuit evaluation of their operands. That is, these operators first evaluate the left operand, then the right operand. If the value of the expression can be deduced from the value of the left operand alone, then the right operand is not evaluated.

## 5.2 The `if` Statement

- **if** statement allows a program to choose between two alternatives by testing the value of an expression. In its simplest form, the if statement has the form 


### IF Statement

```C
if (expression) statement
```

- The parentheses around the expression are mandatory. They are part of the `if` statement, not part of the expression. When an `if` statement is executed, the expression in the parantheses is evaluated; if the value of the expression is nonzero - which C interprets as true - the statement after the parentheses is executed.

### Compound Statement

- In our `if` statement template, the "statement" is singular, not plural. If we want statement to control two or more statements, we  use braces around a group of statements

### The **`else`** clause

- An `if` statement may ave an `else` clause:

```C
if (expression) statement else statement 
```

- the satement that follows  else is executed if the expression in parantheses has the value 0. It's not unusual to have if statement to be nested inside other if statement.

### Cascaded `if` statements

- We will need to test a series of condition, stopping as soon as one of them is true. A cascaded if statement is often the best way to to write a series of tests.

### The "dangling else" Problem

- When if statements are nested, we have to look out for dangling else problem.

```C
if (y != 0)
	if(x ! = 0)
		result = x / y;
else
	printf("Error: y is equal to 0\n");
```

- To which if the else belongs. If we look at the indentation we might think it belongs to the outer if, but C follows a convention where the else belongs to the nearest if statement that has not been paired up with an else.



### Conditional Expression

- C's if statement allows a program to perform one of two actions depending on the value of the condition. C also provodes an operator that allows an expression to produce one of two values depending on the value of a condition.

- The conditional operator consists of two symbols (? and :) which must be used together.

```C
exp1 ? exp2 : exp3
```

- It is unique because it needs three operands instead of two, that is why it is called as ternary operator.

- The conditiona; expression should be read as "if expr1 then expr 2 else expr3". First expr1 is evaluated, if it is 1 then expr2 is evaluated. if the expr 1 is 0 then expr3 is evaluated.

### Boolean values in C99

- the long standing lack of boolean in C89 was resolved in C99. It provides \_Bool variable and it can be assigned only 0  or 1. If you try to assign a non zero value into a \_Bool variable will cause the variable to be assigned 1.

- In addition , C99 gives a new header, `<stdbool.h>` that makes it easier to work with boolean values. This header provides a macro `bool`, that stands for \_Bool. if the header file is included we can write it as:

```C
bool flag;
```

- In addition it also provides macros named ***true*** and ***false***. Which stand for 1 and 0 respectively.

## 5.3 The **`Switch`** Statement

- In everyday programming, we will often we need to compare an expression against a serie sof value to see which one it currently matches. A cascaded if statement can be used for this purpose. for exmaple:
``` C
if(grade == 4)
	printf("Excellent\n");
else if (grade == 3)
	printf("Good\n");
else if (grade ==2)
	printf("Average\n");
else if (grade == 1)
	printf("Poor\n");
else if (grade ==0)
	printf("Failed\n");
else
	printf("Illegal grade"\n);

```

- As an alternative to this kind of cascaded if statement, C provides the `switch` statement. This is how we write the above program with the help of `switch`:

```C
switch (grade) {
	case 4: printf("Excellent");
		break;
	case 3: printf("Good");
		break;
	case 2: printf("Average");
		break;
	case 1: printf("Poor");
		break;
	case 0: printf("Failing");
		break;
	default: printf("Illegeal grade");
		break;
}
```

- when this statement is executed , The value of the variable grade is tested against 4,3,2,1,0. if it matches 4, the message excellent is printed, then the break statement transfers control to the statement following the `switch`.

- If the value does not match any of thr choices listed, the default case applies and the message illegal grade is printed.

- A `switch` statement is often easier and faster than a cascaded if statement. The most common form of the `switch` statement is

```C
switch ( expression ) {
	case constant-expression: statements
	...
	case constant-expression: statements
	default: statements
}
```

- The switch statements are fairly complex:
	
	- **Controlling expression**. the word switch must be followed by an integer expression in paranthese. characters are treated as integers in C and thus can be tested in `switch` statements. Floating point numbers and strings do not qualify.

	- **Case labels**. A constant expression is an ordinary expression except it cannot contain variables or function calls. 5 is an conctant expression, but n + 10 is not (unless n is an macro that represents an constant).
	
	- **Statements**. After each case labels comes any number of statemnets. No braces are requires. The last statement is usually `break`.

- Duplicate casses are not allowed. Order of case does not matter. It is not required to have default case.

### The Role of the **`break`** Statement

- Executing a break statement causes the program to break out of the switch statement: Execution continues at the next statement after switch.

- The reason we need `break` has to do with `switch` statement is a computed jump. When the controlling expression is evaluated, the control jumps to the case label matching the value of the `switch` expression. Without break (or some other jump statement) control will flow from one case into the next.

- if the break statement is not included then it might fall through. Some programmers use this to group a bunch of code.


