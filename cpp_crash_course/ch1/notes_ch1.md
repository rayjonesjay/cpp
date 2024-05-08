Credits:
Book : C++ crash course
Author : Josh Lospinoso
Notes : ray jones aka xelfmade

Chapter1:

#linux and gcc
On linux, you can choose between two main C++ compilers: GCC and Clang.

GCC is an initialism for GNU Compiler Collection.
GNU -> is a recursive acronym for GNU's Not Unix
GNU is a Unix-like operating system and a collection of computer software


#How to install GCC or Clang on Debian Distro

Use APT -> Advanced Package Manager which is debians package manager

#PROCEDURE:

1: Open Terminal by pressing CTRL+ ALT + T 
2: Type: `$ sudo apt update && sudo apt upgrade`
3: Install GCC8 and Clang 6.0 `$ sudo apt install g++-8 clang-6.0`

4: Test GCC and Clang `$ g++-8 -version`
`$ clang++-6.0 --version`

5: 


##BOOTSTRAPPING C++
#The c++ type system

C++ is an object-oriented language. Objects are abstractions with state and behaviour.
A good example the book has provided is a real-world object like a light switch.
You can describe its `state` as either on or off.

You can describe its `behaviour` like does it toggle from on state to another state (off state) , or a dimmer state


The collection of the behaviours and states that describe a certain object is called its type

A language whose object's type are predefined is called a `strongly typed language`


There are built in types that come with any language, C++ has an inbuilt type called int.

An int type can store numbers and also support math operations to manipulate the int object

To work with objects we need to name them, a named object is called a varaible.



EXAMPLE
`int age_limit;`
type variable_name


#Initializing a Variable's State:

`int age_limit = 18;`

When you declare variables, you initialize them. Object initialization establishes an object's initial state

* You can assign variables to equal the result of an expression like so

`int age_limit = 20-2;`

int type supports many other operations such as addition + , subtraction -, division / and modulo division % and multiplication *


#Conditional Statements

Conditional Statement allow you to make decisions in your programs.
This decisions evaluate to either true or false(boolean expressions)

*TIP -> you can compile your program to see if it contains errors*

if (boolean-expression that will evaluate to true or false) 
{
	statement to be executed
}


Listing 1-4: Program1

```
#include <cstdio>
int main() {
	int x = 0;
	if (x > 0) printf ("Positive");
	else if (x < 0) printf ("Negative");
	else printf("zero");
}
```
>>zero



#Functions:

Functions are blocks of code that accept any number of input objects called parameters or arguments and can return output objects to their callers.


*Syntax when declaring a function*

return_type function_name(param1,param2,...) {
	block of code that behaves like the function name
	return value;
}

EXAMPLE

int addTwoNumbers(num1,num2){
	sum = num1 + num2;
	return sum;
}


#Calling Functions

You can call the function in any function but lets call it in main()

int main() {
	int result;
	result = addTwoNumbers(4,3);
	printf("%d\n",result);
}


#printf FORMAT SPECIFIERS

All format specifiers start with %

%d -> is used for int types.
whenever printf sees %d it replaces the format specifier with an int value.

printf function is a derivative of the writef function offerred in BCPL.

EXAMPLE

`printf("hello i am %d years\n", 18);`
>>hello i am 18 years

whenever printf sees %d it will replace it with 18

*REVISITING step_function*

#include <cstdio>

int step_function(int x) {
	int result = 0;

	if (x < 0) {
		result = -1;
	}else if (x > 0){
		result = 1;
	}

	return result;
}

int main() {
	int num1 = 42;
	int result1 = step_function(num1);

	int num2 = 0;
	int result2 = step_function(num2);

	int num3 = -32767;
	int result3 = step_function(num3);

	printf("Num1 %d Step %d\n", num1,result1);
	printf("Num2 %d Step %d\n", num2,result2);
	printf("Num3 %d Step %d\n", num3,result3);

	return 0;
}


>> Num1 42 Step 1
>> Num2 0 Step 0
>> Num3 -32767 -1

Because printf() is used we must include the cstdio library.

