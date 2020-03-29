
#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Napisati funkciju koja prevodisa engl na lat
//pravila su sljedeca ako rijec pocinje samoglasnikom dopisuje se hay na kraj recenice
//inace svi suglasnici s pocetka rijeci se pribaciju na kraj te se na kraj rijeci dopisuje ay
//recenice treba spremiti u vektor a zatim prevest slucajnu odabranu recenicu iz vektora 
//WHAT TIME IS IT? =ATWHAY IMETAY ISHAY ITHAY?

int isVowelA(char ch)
{
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return 1;
	}
	return 0;
}

void translate(string* str)
{
	if (str == NULL)
	{
		return;
	}
	string word;
	string hay = "hay";
	string ay = "ay";
	string strTmp;
	char sign = ' ';
	for (int x = 0; x <= str->length(); x++)
	{
		if ((x == str->length()) || (str->at(x) == ' '))
		{
			
			if (isalpha(word.at(word.length() - 1)) == 0 || !isdigit(word.at(word.length() - 1)) == 0)
			{
				sign = word.at(word.length() - 1);
				word.pop_back();
			}

			
			if (isVowelA(word.at(0)) == 1)
			{
				word += hay;
			}
			else
			{   
				int len = word.length() + 1;
				for (int i = 1; i < len; i++)
				{
	
					if (isVowelA(word.at(i - 1)) == 0)
					{
						word += word.at(i - 1);
						word.erase(i - 1, 1);

						len = len - 1;
						i--;
					}
				}
				word += ay;

			}
			word += sign;
			strTmp += word;
			word = "";
		}
		else
		{
			word += str->at(x);
		}

	}
	*str = strTmp;

}

int main()
{
	srand(time(NULL));

	vector<string> sentences;
	sentences.push_back("What is the time?");
	sentences.push_back("Hello World.");
	sentences.push_back("It is a real live boy.");
	int randNum = rand() % 3;
	translate(&sentences[randNum]);
	cout << sentences[randNum];

}