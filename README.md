## C Printf project

The C Printf project is a teamwork project with one peer. Together, we must create a function that copies the functionality of the printf command.

* The project participants :

-Quentin Zuzlewski

-Emmanuel Premier Exauce Moumbouilou Sanato

## Setup and installation instructions

* Clone the repository (git clone)

The command for clone the repository is git clone link of https/ssh url.

Here is the link to clone the repository so that you can clone the repository: https://github.com/QuentinC26/holbertonschool-printf#

For get the link of https or ssh url, you click on the < code > you see in green. Finally, you copy the link 

## User guide

* Documentation of this project

To help you better understand the project, here is a documentation called the secrets of printf, which can be found here: https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20250327%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20250327T224614Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d5c3ea46b2da80df724dad66d69953cbc3c005ed995b37f9b8aa593e839e28a9

* Explanation of format of printf

The _printf function allows you to print different messages in different formats.

Here are the different ones you can use:

%d to use an integer
%f to use a decimal
%c to use a character
%s to use a string

The format in printf is essentially a way of specifying the type and manner of data to be printed on screen.

* Example :

_printf("Your age is: %d\n", age);

I use %d to print a number, so in this example, %d will be your age.

_printf("Pi value is approximately: %.2f\n", pi);

I use %f to print a decimal and I specify a .2 after the % to decide to print only two digits after the decimal point, the %f will be the PI value.

_printf("First letter: %c\n", 'A');

I use %c to print a character, so %c will be the first letter.

_printf("Greeting: %s\n", "Hello");

I use %s to print a string, so %s will be your string.

* Compilation

You use the compilation command for print the result you wish to.

You first enter the following command, which will compile the file : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Then add -o as to print the desired result.

Once this is done, simply type ./as to see if the code displays the result you want.

## A few tips

Here are a few tips to help you get started :

-Fork (Copy the repository) the repository.
-Create a new branch for your feature or fix: `git checkout -b feature-name`.
-Make your changes and commit: `git commit -m “Description of change”`.
-Push your changes: `git push origin feature-name`.
-Submit a pull request.