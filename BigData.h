//BigData.h  �ļ�
#pragma once
#include<string.h>
#include<string>
typedef long long  INT64;

//��ʾ����������ֵ
#define MAXINT64 (INT64)0x7fffffffffffffff 
#define MININT64 (INT64)0x8000000000000000 

class BigData
{
public:
	//���ֵĹ��캯�� 
	BigData()
		:_value(0)
		,_str(string())
		,_IsOverFlow(false)
	{
		_str.resize(3);
		_str[0] = '+';
		_str[1] ='0';
		_str[2] = 0;
	}
	BigData(const  char *  str);
	BigData(const INT64 value);
	//�ж�һ������û��Խ��
	bool IsOverFlow(const  char  * str);
	//����ʵ�ֵ�  +  -  *  /  %
	BigData operator+(const  BigData& data);	
	BigData operator-(const  BigData& data);	
	BigData operator*(const  BigData& data);	
	BigData operator/(const  BigData& data);
	BigData operator%(const  BigData& data);
	//���صıȽϺ���
	bool operator>(const  BigData& data);
	bool operator<(const  BigData& data);
	bool operator==(const  BigData& data);
	bool operator!=(const  BigData& data);

protected:
	INT64	_value;			//��ǰ���� û�������������ʾ
	string  _str;			//�ַ�����ʾ
	bool	_IsOverFlow;	//��ʾ���ǵ�ǰ��������ûԽ��
	
};

//str1   ����  ���� str2
//str1  ��  str2��������
//ʵ�������ַ�����  �������㣬������һ������£���str1 ����Ҫ����str2
string   StrAddStr(char *str1,char *str2);
string   StrSubStr(char *str1,char *str2);
string   StrMulStr(char *str1,char *str2);
string   StrDivStr(char *str1,char *str2);
string   StrRemStr(char *str1,char *str2);



//��������
void TestBigData();