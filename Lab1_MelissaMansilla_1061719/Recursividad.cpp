#include "Recursividad.h"



Recursividad::Recursividad()
{
}
int Recursividad::Fibonacci(int num) 
{
	if (num <= 1) 
	{
		return 1;
	}
	else 
	{
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}
int Recursividad::Factorial(int num2) 
{
	if (num2 == 1) 
	{
		return 1;
	}
	else 
	{
		return (num2 * Factorial(num2 - 1));
	}
}
System::String^ Recursividad::Binario(int num3)
{
		if (num3 % 2 == 0)
		{
			return (Binario(num3 / 2) + "0");
		}
		else
		{
			if (num3 == 1) 
			{
				return ("1");
			}
			return (Binario(num3 / 2) + "1");
		}
}