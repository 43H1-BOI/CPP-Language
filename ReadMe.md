# Some Important Notes

## Introduction

**C++** -->

1. Prev. C with Classes
2. Mother of All Language ( C/C++ )
3. Fast
4. Middle Level Language
5. Embed System Language

**Used in** -->

1. Advanced Graphics
2. Embedded Systems
3. Video Games

<br><hr><br>

## Basics

**_Input and Output_** :- Let's see a program first then we'll understand each line of code in _detail_.

        1 #include<iostream>
        2 using namespace std;
        3
        4 int main(){
        5   int age ;
        6
        7   cout << "Enter Your Age : ";
        8   cin >> age ;
        9
        10  cout << "WOW! You are " << age << " Years Old." << endl;
        11
        12  return 0;
        13 }

_"Don't Worry if you won't understand any of these things , We'll talk about them in depth later on this Repo"_

> In 1st line , we have included a header file for functionalities to work properly . If we don't add header file in C/C++ , the whole code meant nothing .

> In 2nd line , we have added a standard _[namespace](#namespace)_ which consist of all important and really usefull funtionalities.

> In 4th line , we have created a main function having **int** as its's **return-type** .

> In 5th line , there is a _[variable](#variable-and-data-types)_ declared of **int** _[data type](#variable-and-data-types)_.

> In 7th line , we used the standard output of C++ . The Text Written in between the **Quotation marks " "** will be displayed upon the screen.

> In 8th line , we used standard input of C++ . We can store data provided by _user_ in _[Variables](#variable-and-data-types)_ using this .

> In 10th line , we have binded up everything and printed them.

> In 12th line , we have return-type for the main funtion and the parenthesis for ending a function.

<hr>

#### **_Variable and Data Types_**

**Variables are containers for storing data values.** Variables in C++ is a name given to a memory location. It is the basic unit of storage in a program.

The value stored in a variable can be changed during program execution.
A variable is only a name given to a memory location, all the operations done on the variable effects that memory location.
In C++, all the variables must be declared before use.

**_syntax :-_**

        // Declaring a single variable
        type variable_name;

        // Declaring a variable with value
        type var_name = value;

        // Declaring multiple variables:
        type var1_name, var2_name, var3_name;

        // Declaring multiple variable with value
        type var1 = value1,var2 = value2;

**Data Types**

1. **int** --> _Stores integers_ -- _2 or 4 bytes_
2. **char** --> _Stores single characters_ -- _1 byte_
3. **bool** --> _Stores True or False / 1 or 0_ -- _1 byte_
4. **float** --> _Floating Point Number , 6 or 7 Decimal Places_ -- _4 bytes_
5. **double** --> _Stores floating point numbers , 15 Decimal Places_ -- _8 bytes_
6. **string** --> _Sentence or couple of words , stores text_ -- _Changes Accordingly_

<hr>

#### **_Constants_**

**_const keyword_** - Used to Convert Value of any Variable Read Only , It can't be modified once assigned.
_If using const keyword , use all capitals for Naming of Constant Variable (It Increases in readability of Code)_

<hr>

#### **_Namespace_**

Provides a Solution for Preventing name conflicts in large projects. Each Entity needs a unique name . A namespace allows for identically named entities as long as the namespaes are different.

_We use "using namespace std;" to get rid of writing "std::" before each statement like "std::cout" , "std::string"_

_We can also create Custom namespace to use them in our program_

**_syntax :-_**

    namespace name_of_namespace {
        // value of Variables
        // EG :
        int x = 5;
        std::string Jai = "Jai Mata Di";
    }

<hr>

#### **_typedef_** is used to define your own identifiers

that can be used in place of type specifiers such
as int , float , and double , etc.

**_syntax :-_**

    typedef <current_name> <new_name>;

We must use "_\_t_" or "_\_type_" as suffix for the typedef variables.

**_Example :-_**

     typedef std::string str_t;

#### **_using keyword_** is also used for [aliasing](#aliasing-is-a-process-of-providing-other-name-to-a-object) of DataTypes.

**_syntax :-_**

    using <new_name> = <current_name>;

**_Example :-_**

     using str = std::string;

<hr>

### **_Operators_** :- _Operators are used to perform operations on variables and values._

Operators in C++ are divided into following groups :

1. [Arithmetic operators](#arithmetic-operators---arithmetic-operators-are-used-to-perform-common-mathematical-operations)
2. [Assignment operators](#assignment-operators---assignment-operators-are-used-to-assign-values-to-variables)
3. [Comparison operators](#comparison-operators---comparison-operators-are-used-to-compare-two-values-or-variables)
4. [Logical operators](#logical-operators---logical-operators-are-used-to-determine-the-logic-between-variables-or-values)
5. [Bitwise operators](#bitwise-operators---bitwise-operators-perform-operations-on-integer-data-at-the-individual-bit-level)

#### Arithmetic operators :- _Arithmetic operators are used to perform common mathematical operations._

1. **" + " Addition** --> _Adds together two values_ --> **x + y**
2. **" - " Subtraction** --> _Subtracts one value from another_ --> **x - y**
3. **" \* " Multiplication** --> _Multiplies two values_ --> **x \* y**
4. **" / " Division** --> _Divides one value by another_ --> **x / y**
5. **" % " Modulus** --> _Returns the division remainder_ --> **x % y**
6. **" ++ " Increment** --> _Increases the value of a variable by 1_ --> **++x**
7. **" -- " Decrement** --> _Decreases the value of a variable by 1_ --> **--x**
<hr>

#### Assignment operators :- _Assignment operators are used to assign values to variables._

![Assignment operators](https://i.postimg.cc/C5QGHQ7Y/Screenshot-2024-07-21-220707.png)

<!--
**Operator        Example     Same As**
1. **=            x = 5       x = 5**
2. **+=           x += 5      x = x + 5**
3. **-=           x -= 5      x = x - 5**
4. ***=           x *= 5      x = x * 5**
5. **/=           x /= 5      x = x / 5**
6. **%=           x %= 5      x = x % 5**
7. **&=           x &= 5      x = x & 5**
8. **!=           x != 5      x = x ! 5**
9. **^=           x ^= 5      x = x ^ 5**
1. **>>=          x >>= 5     x = x >> 5**
1. **<<=          x <<= 5     x = x << 5** -->
<hr>

#### Comparison operators :- _Comparison operators are used to compare two values (or variables)._

_This is important in programming, because it helps us to find answers and make decisions.
The return value of a comparison is either 1 or 0, which means true (1) or false (0)._

1. **" == "** -- **Equal to** --> **x == y**
2. **" != "** -- **Not equal** --> **x != y**
3. **" > "** -- **Greater than** --> **x > y**
4. **" < "** -- **Less than** --> **x < y**
5. **" >= "** -- **Greater than or equal to** --> **x >= y**
6. **" <= "** -- **Less than or equal to** --> **x <= y**
<hr>

#### Logical operators :- _Logical operators are used to determine the logic between variables or values._

_As with comparison operators, you can also test for true (1) or false (0) values with logical operators._

1. **" && " Logical AND** --> _Returns true if both statements are true_ --> **x < 5 && x < 10**
2. **" || " Logical OR** --> _Returns true if one of the statements is true_ --> **x < 5 || x < 4**
3. **" ! " Logical NOT** --> _Reverse the result, returns false if the result is true_ --> **!(x < 5 && x < 10)**
<hr>

#### Bitwise operators :- _Bitwise operators perform operations on integer data at the individual bit-level._

_These operations include testing, setting, or shifting the actual bits._

        &	Bitwise AND Operator
        |	Bitwise OR Operator
        ^	Bitwise XOR Operator
        ~	Bitwise Complement Operator
        <<	Bitwise Shift Left Operator
        >>	Bitwise Shift Right Operator

<br><hr><br>

**_Type Conversion_** :- Conversion of a value from one type to another .

- _Implicit_ --> Automatic by Compiler
- _Explicit_ --> Precode value with new data type (Done by Programmer)

<br><hr><br>

<br><br><hr><br><br>
<br><br><br><br><br>
<br><br><br><br><br>

### **_Conditional Statements_**

There are three types of conditional statements exists in CPP Language.

1. **If-Else statement**
2. **Switch statement**

#### 1. **If-Else Statement** :- _If - Else Statement is divided mainly into 4 parts._

        if(condition){
        // Statements to execute if
        // condition is true
        }

### **_Loops_**

### **_Functions_**

Functions are block of code which can be reused many times.

**_Declaration :-_**

    <return_type> <Function_name>(parameters);

**_Definition :-_**

    <return-type> <Function-name>(parameters if any){
        //block of code
    }

Function must be declared before main and can be defined after main or before main() fun , we can both declare and define function at the same time.

**_Example :-_**

    /* Function Example 1 :
    Print Namaste for India and Bonjour for French*/
    #include<iostream>
    using namespace std;

    void Greet(int n); // Function Declaration before main()

    // Function Decration and Definition at same time
    void GoodBye( ){
        cout << "Good Bye ! " << endl>>;
    }

    int main( ){ // Calling Main Function
        cout << "Enter 1 for Indian " << endl;
        cout << "Enter 2 for French " << endl;

        printf("Enter Your Choice : ");
        cin >> n;

        Greet(n); // Calling Greet() Function

        GoodBye(); // Calling GoodBye() Function
        return 0;
    }

    // this function has a parameter of int data-type
    void Greet(int n){ // Function Definition
        if (n == 1){
            printf("Namaste India");
        } else if (n == 2) {
            printf("Bonjour");
        } else{
            printf("Invalid Input");
        }
    }

<hr>

<hr>

### **_Arrays_**

### **_String_**

### **_OOPs_**

## Extras :

### Types of Language of Computer :-

1. Higher Level language - Easy to write and Understand as a normal human and Slower . Python , JS , Java , C# , Ruby , etc.

2. Middle Level Language - Comparatively not easy to write and understand but Faster in Speed . C , C++ , Oberon , Pascal , etc.

3. Low Level Language - Not Possible to write and understand cause this was written in Binary Form . Assembly Language or Machine Language

<br><hr><br>

#### **_Aliasing_** _is a process of providing other Name to a Object._
