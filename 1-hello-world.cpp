#include <iostream>
/*
Hello World

	If you are familiar with other langs sush as C - Python - PHP ..., You will not find problems at the syntax,
Because most of langs are similar to each othera
First thing, for execute the code we write it in the main function 
inside:
	int main{
		some code...
	}
So, How to print Hello WOlrld?
	python : print("Hello Wolrld")
	php    : echo "Hello World";
	C      : printf("Hello World");
This is example of printing Hello Wolrd with python, php and c.

what about C++ ?
	The keyword that we usind enstead of echo in php or print in python is cout, this keyword has tow part:
		First part : c, and its doesn't mean c lang, it's meaning is console.
		Second part : out
	So when we write cout that mean with human readable text : console out.
	lets write Hello world with c++
*/
int main()
{
    std :: cout << "Hello World";

    /*
    Don't be scared, we will not use std keyword all time, enstead of write std :: in each line, we can use
    using namespace std, up of the code, forget about it right now, so Hello World can be wroten esaier that 
    example up,
    complacated way:
    */
    std :: cout << "Hello World" << std :: endl;
    /*
    endl keyword mean end line, we can use \n as well.
    esaier way:
    */
    cout << "Hello World";
}
