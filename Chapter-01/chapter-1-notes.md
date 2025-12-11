# Chapter 1 - Introducing C


## 1.1 History of C

- C is a programming language developed in bell labs.

- C is a product of UNIX OS

- UNIX: It is a multiuser, multitasking OS developed in the late 1960's and early 1970's at AT&T's Bell labs by Ken Thompson, Dennis Ritche, and others.

	- Programs can be combined using **pipes** and **shell** scripts to perform complex tasks.

	- Written in **C**.

	- All devices and files are represented in a single tree-like directory structure.

	- Acesss to files and processes is controlled through user and group permissions.

- There are different C standards like C99, C89, and others. So ANSI cameup with a standardized C.

- There are multiple languages that have come up from C. Some examples are **C++, Java, C#, and others**.

- With all these new languages, Is there a need to learn C? There are older softwares which may need maintaining. Secondly, We can get great insights into the features of C++, Java and other C based languages. Third, C is still used to develop new software.



## 1.2 Strength and Weaknesses of C

- Underlying Philosphy:
	
	- C is a **low level language**. It serves as a suitable language for systems programming as it provides access to machine level concepts. C also provides operations that correspond closely to a computers built in instruction.
	- C is a **small language**. The original i.e. K&R C was just 49 pages. To keep it small c relies heavily on library of standard functions.

	- C is a **permissive language**. It gives a wider degree of latitude then many other languages.

- Strengths:

	- **Efficiency** is one of the main strengths of C. C was intended for applications where assembly language had tradionally been used.

	- The language is very **portable**. The programs written in C can run on computers ranging from PC to supercomputers.

	- C is a very **powerful languge**. C has a very large collection of data types and operators help make it a powerful language.

	- C is a very **flexible** language. C is now used everywhere from embedded systems to commercial data processing.

	- One of C's great strength is **standard library**, which contains hundreds of functions for input/output, string handling, storage allocation, and other useful operations.

	-  C is particulary powerful in combination with **UNIX**.

- Weakness:

	- C's flexibility makes it **error prone**. Programming mistakes that would be caught in many other languages can't be detected by compiler.

	- C programs can be **hard to understand**. Programmers who are to clever for their own good can make programs almost immposible to understand.

	- C programs can be **diffcult to modify**. Large programs written in C can be hard to change if they haven't been designed with maintenance in mind.

- `lint`: A tool used in C to check errors. It is not just limited to errorsit can be used to check for suspicious combinations of types, unused variables, unreachable code, and non portable code. It produces a list of diagnostic messages, which the programmer has to sift through. The advantages of using lint is that it can detect errrors that the compiler may have missed. However lint can produce messages by the hundreds, of which only a fraction refer to actual errors.

	- `splint`: An advanced version of `lint` is already available in many linux distribution called as `splint` and can be downloadded for free from **www.splint.org**.

