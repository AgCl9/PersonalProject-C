#include "pch.h"

bool isAscil(char tenmp) 
{ 
	if (temp > 122 || temp < 48)
	{
		return true;
	}
	else if (temp < 65 && temp > 57)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

// �հ��ַ���� 
bool isWhite(char temp) 
{ 
	if (temp == ' ' || temp == '\n')
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//���ʼ�� 
bool isWord(char temp) 
{ 
	if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// �ж��Ƿ�Ϊ���� 
bool isDigit(char temp)
{
	if (temp >= '0' && temp <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

Wordcount::Wordcount()
{
	character = 0;
	word = 0;
	line = 0;
}

Wordcount::Wordcount(string s)
{
	filename = s;
	character = 0;
	word = 0;
	line = 0;
}
