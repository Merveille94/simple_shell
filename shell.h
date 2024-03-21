#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * add - Adds two integers
 * Description: this program takes in two integers and return their sum
 * @num1: the first integer
 * @num2: the second integer
 * Return: returns the value of add
*/
int add(int num1, int num2)
{
	return (int num1 + int num2);
}

#endif
