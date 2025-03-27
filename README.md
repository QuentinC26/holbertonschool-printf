## C Printf project

The C Printf project is a teamwork project with one peer. Together, we must write a function that produces output according to a format for task zero and we must handle the following conversion specifiers for task one.

* The project participants :

-Quentin Zuzlewski

-Emmanuel Premier Exauce Moumbouilou Sanato

## The documents required for this project

For this project, we must realize four documents.

* README.md

The README.md is used to explain the project and the different realization stages for explain to other person.

* Flowchart

The flowchart is used for explain the overall logic of your function _printf. The flowchat must be legible.

* Man page

The man page is a command used for explain the command and give a different information concerning the command.

* Author file

The author file is a file used for leave the contact details of the project participant.

## Requirement for this project

* General Requirement

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h

Don’t forget to push your header file

All your header files should be include guarded

* Authorized Functions and Macro

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

* Compilation

Your code will be compiled this way : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Documentation for this project

[Approaching a project](https://intranet.hbtn.io/concepts/881)

This page explain multiples steps for succes the project.

[group project](https://intranet.hbtn.io/concepts/893)

This page explain the expectations and the differents rating criteria of this project.

[Pair programmating - How to](https://intranet.hbtn.io/concepts/894)

This page explain how to work in a group when difficulties arise, and how to send or retrieve files correctly.

[Flowcharts](https://intranet.hbtn.io/concepts/895)

This page explain the all information to the Flowcharts and use a example for support a different explanations.

[secret of printf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20250326%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20250326T215550Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5d2edc235c2bb3a2f903639e1c60533a398d77adb1b666a0e7b9b89150940ef8)

This page explain the all information to the printf and use a table for support a different explanations.

[git tutorial](https://www.youtube.com/watch?v=iZ55m9ieSCo)

This video explain a different information and command for manage a different branch and file in the branch.

[README.md](https://www.youtube.com/watch?v=f2PczmU0QPQ)

This video explain how realize a good README file structured.

## main.h file

* Preprocessor directives

ifndef and define are used for avoid a multiples inclusion of the same header file.

* The header file

I use the standard library <stdio.h>, <stdarg.h>, <unistd.h>, <string.h> and <limits.h> for use all command i need.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect... 

* Typedef struct format

I add a structure format with 2 member. The first member is char spec. This member is used for indicate the type of format. This second member is int (*function)(va_list). This function pointer is used for responsible for data processing, depending on the type of format.

* The prototype

I add all prototype for works in any file linked to main.h

* endif

I add endif in the end of the file for it closes the inclusion block

## format_information file

* The header file

Im add a main.h for so that it applies the commands related to the commands I'm going to put in this file.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect...

* Struct the_format

I add a structure the_format from the typedef structure format. The_format structure is used for to determine whether ‘c’ is a character, ‘s’ is a string, % is a percent, 'd' is a float, 'i' is a integer and 0 is for the NULL character.

* int count = 0

I add a int count for browse the array. I add a value count at 0 for start in the begin the string.

* while loop and if condition

The while loop specifiers[count].spec means that we will continue to browse the specifiers array as long as the current element, specified by count, has a value for spec.

* return (NULL)

The return NULL is used for say if specifiers[count].spec is different from an element, then it returns NULL

## _putchar.c file

* The header file

Im add a main.h for so that it applies the commands related to the commands I'm going to put in this file.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect...

* _putchar command

In the prototype int _putchar(char c), i use a write command in the return for print one character.

## print_char.c

* The header file

Im add a main.h for so that it applies the commands related to the commands I'm going to put in this file.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect...

* The details of in the prototype print_char(va_list args)

In the prototype int print_char(va_list args), i use a write command in the return for print one character with the variadic instructions.

## print_string.c

* The header file

Im add a main.h for so that it applies the commands related to the commands I'm going to put in this file.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect...

* The prototype int print_string(va_list args)

In the prototype int print_string(va_list args), i use a write command in the return for print a string of character with the variadic instructions.

* Before the return write

Before the return write, i add if condition !str which will execute the opposite of its initial command, with the ! in front of the variable name. In this condition, str will printed (NULL).

The while loop will browse the array str with the variable len.

## print_percent

* The header file

Im add a main.h for so that it applies the commands related to the commands I'm going to put in this file.

* Commentary

I add a different commentary for describe the different usefulness function, function pointer ect...

* The prototype int print_percent(va_list args)

I add a void(args) for ignore the arguments with the void type and i return only the % with the _putchar command.

