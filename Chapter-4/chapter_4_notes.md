# Chapter 4 - Expressions

- The simplest expression are variables and constants. More complicated expressions apply operators to operands. In the expression **`a + (b * c)`**, the `+` operator is applied to the operands **a** and **(b * c)**, both of which are expressions in their own right.

- Operators are the basic tools for building expressions, and C has an unusually rich collection of them.

## 4.1 Arithmetic Operators

- The arithmetic operatord that perform addition, subtraction, multiplication, and division - are the workhorses of many programming languages.


### Unary

- `+ unary plus`
- `- unary minus`

### Binary

#### Additive

- `+ addition`
- `- subtraction`

#### Multiplicative

- `* multiplication` 
- `/ division`
- `% remainder`		|

- The addictive and multiplicative operators are said to be binary because tey require two operands. The unary operators require one operand.

```
i = +1; // + used as a unary operator
j = -1; // - used as a unary operator
```

- The unary operator does nothing. It's used primarily to emphasize that a numeric constant is positive. The binary operators with the exception of `%` allow either integer or floating point operands, with mixing allowed.

- When `int` and `float` operands are mixed, the result has type `float`. The `/` and `%` operators reuire special case:

	- The `/` operator can produce suprising results when both of its operands are integers, the `/` truncates the result by dropping the fractional part.

	- The `%` operator requires integer operands.

	- Using 0 as the right operand of either `/` or `%` causes undefined behavior.

### Operator Precedence and Associativity

- When an expression contains more than one operator, its interpreatayion may not be immediately clear. For example, does `i + j * k` mean add i and j,then multiply k, or does it mean multiply j and k,then add i. One way to solve this dilema is by using parantheses. If we do not use parantheses, then C language uses **operator precedence** rules to resolve ambiguity.

``` 
Highest: + - (unary)
	 * / %
Lowest: + - (binary)
```

- Operators listed on the same line have equal preference. Operator precedenc rules are not enough when an expression contains two or more operators at the same level of precedence. **Associativity** of the operators come into play.

- An operator is said to be **left associative** if it groups from left to right. The **binary arithmetic** operators are all left associative.

```
i - j- k is euivalent to (i - j) - k
i * j / k is equivalent to (i * j) / k
```

- An operator is **right associative** if it groups from right to left. The unary arithmetic operators are both right associative.

```
- + i is equivalent to - (+i)
```

## 4.2 Assignment Operators

### Simple Assignment

- The effect of assignment v=e is to evaluate the expression e and copy its value into v.

```
i = 5; // i is now 5
j = i; // j is now 5
k =  10 * i + j; // k is now 55
```
- If v and e don't have the same type, then the value of e is converted to the type v as the assignment takes place. 


### L values

- The assignment operator requires an lvalue as its left operand. An lvalue represents an object stored in computer memory, not a constant or the result of a computation. Variables are lvalues. Expression such as 10 or 2 * i are not.

### Compound Assignment

- Assignments that use the old value of a variable to compute its new value are common in C programs.

```i = i + 2;```

- C's compound assignment operator allow us to shorten this statement and others like it.

```i += 2;```

- `i *= j + k;` is not the same as `i = i * j + k`

## 4.3 Increment and Decrement Operators

- Two of the most common operations on a variable are incrementing and decrementing. we can accomplish these tasks by writing 

```
i = i + 1;
j = j - 1;

// By using compound assignment we can reduce it to

i += 1;
j -= 1;
```
- But C allows increments and decrements to be shortened even further, using the ++ (** increment**) and -- (**decrement**). One complications is that ++ and -- can be used as prefix or postfix operators.

```C

// Evaluating the expression ++i yields i + 1 and-as a side effect-increments i: 

i = 1;

printf("i is %d\n", ++i); // prints "i is 2"
printf("i is %d\n",i); // prints "is 2"

// Evaluating the expression i++ produces the result i, nut causes i to be incremented afterwards.

i = 1;

printf("i is %d\n", i++); // prints "i is 1"
printf("i is %d\n", i); // prints "i is 2"
```

## 4.4 Expression Evaluation

- The below table shows the precedence of each operator to the other operators in the table.

|Precedence|Name		|Symbol(s)		|Associativity	|
|----------|--------------------|-----------------------|---------------|
|1	   |increment(postfix)	|++	  		|left		|
|	   |decrement(postfix)	|--	  		|		|
|2	   |increment(prefix)	|++	  		|right		|
|	   |decrement(prefix)	|--	  		|		|
|	   |unary plus		|+	  		|		|
|	   |unary minus		|-	  		|		|
|3	   |multiplicative	|\* / %	 		|left		|
|4	   |additive		|+ -	  		|left		|
|5	   |assignment		|= \*= /= %= += -=	|right		|


- Suppose we come across a complicated expression such as:

```
a = b += c++ - d + --e / -f
```

- The operator with highest precedence is ++, used here as a postfix operator, so we put parantheses around it

```a = b += (c++) - d + (--e) / (-f)```

- Next we notice that `/` operator :

```a = b += (c++) - d + ((--e) / (-f))```

- The expression contains two operators with precedence 4. The `-` and `+` operator group from left to right.

``` a = b += (((c++) - d) + ((--e) / (-f)))```

- The only remaining operators are = and +=. Both operators are adjacent to b, so we must take **associativity** into account.

```(a = (b += (((c++) - d) + ((--e) / (-f)))))```

### Order of Subexpression Evaluation

- C does not define the order in which subexpressions are evaluated. Thus, in the expression (a + b) * (c - d) we do not know whether (a + b) will be evaluated before (c - d).

- When using increment or decrement operators, be careful thtat the expression do not depend on a particular order of evaluation.

## 4.5 Expression Statements

- C has an unusal rule that any expression can be used as a statement. For example, we could turn the expression ++i into a statement:

```++i;```

- When this statement is excuted, i is first incremented, then the new value of i is fetched. However, since ++i is not part of a larger expression, its value is discarded and the next statement executed.
