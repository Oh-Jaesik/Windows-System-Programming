#include <iostream>	
#include <algorithm>	

void to_upper(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
}

void to_lower(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
}

int main()
{
	char str[] = "Hello";
	
	to_upper(str);
	std::cout << str << std::endl;
	
	to_lower(str);
	std::cout << str << std::endl;
	
	return 0;
}