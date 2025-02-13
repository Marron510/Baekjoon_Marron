#include <iostream>
#include <cstring>
#include <string>

std::string str;

size_t N = 0;
double Total = 0;
int size = 20;

double Credit = 0;
double PrevCredit = 0;
double Prev = 0;


int main()
{
	while (true)
	{
		std::cin >> str;

		++N;
	

		if (2 == N % 3)
		{
			PrevCredit = Credit;

			if(str == "4.5")
			{
				Credit = Credit + 4.5;
				Prev = 4.5;
			}
			else if (str == "4.0")
			{
				Credit = Credit  + 4.0;
				Prev = 4.0;
			}
			else if (str == "3.5")
			{
				Credit = Credit + 3.5;
				Prev = 3.5;
			}
			else if (str == "3.0")
			{
				Credit = Credit + 3.0;
				Prev = 3.0;
			}
			else if (str == "2.5")
			{
				Credit = Credit + 2.5;
				Prev = 2.5;
			}
			else if (str == "2.0")
			{
				Credit = Credit + 2.0;
				Prev = 2.0;
			}
			else if (str == "1.5")
			{
				Credit = Credit + 1.5;
				Prev = 1.5;
			}
			else if (str == "1.0")
			{
				Credit = Credit + 1.0;
				Prev = 1.0;
			}
			else if (str == "0.0")
			{
				Prev = 0.0;
			}

		}
		


		if (0 == N % 3)
		{
			if (str ==  "A+")
			{
				Total  = Total + Prev *  4.5;
			}
			else if (str == "A0")
			{
				Total = Total + Prev * 4.0;
			}
			else if (str == "B+")
			{
				Total = Total + Prev * 3.5;
			}
			else if (str == "B0")
			{
				Total = Total + Prev * 3.0;
			}
			else if (str == "C+")
			{
				Total = Total + Prev * 2.5;
			}
			else if (str == "C0")
			{
				Total = Total + Prev * 2.0;
			}
			else if (str == "D+")
			{
				Total = Total + Prev * 1.5;
			}
			else if (str == "D0")
			{
				Total = Total + Prev * 1.0;
			}
			else if (str == "F")
			{
				Total = Total + Prev * 0.0;
			}
			else if (str == "P")
			{
				--size;
				Credit = PrevCredit;
			}
		}
		
		if (N == 60)
		{
			Total /= Credit;
			break;
		}
	}

	std::cout << Total;
}

	
