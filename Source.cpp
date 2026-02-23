#include <iostream>
#include <string>


bool checkCard(const char charArray[], int size)
{
    int sum = 0;
    bool isSecond = false;  

    
    for (int i = size - 1; i >= 0; i--)
    {
       
        int digit = charArray[i] - '0';

        if (i % 2 == 0)
        {
            digit = digit * 2;
            if (digit > 9)
            {
                digit = (digit % 10) + 1;  
            }
        }

        sum += digit; 
    }
    if (sum % 10 == 0)
    {
        std::cout << "This passes Luhn check" << std::endl;
        return true;
    }

    std::cout << "This does not pass Luhn check" << std::endl;
    return false;
}
void print(const char charArray[],int size) 
{
	
	for (int i = 0; i < size; i++)
	{
		std::cout << charArray[i];
	}
}


int main()
{
	std::string cardNumber; 
	std::cout << "insert cart number: ";
	std::cin >> cardNumber;


	const char* charArray = cardNumber.c_str();
	int size = cardNumber.length();
	print(charArray, size);
	checkCard(charArray,size);


	
	

	return 0;
}