/*
*���ܣ�����Ƕ����Ĵ���˳��洢
*ʱ�䣺2015��7��15��17:16:01
*�ļ���SString.h
*���ߣ�cutter_point
*/

#include "SString.h"

//�õ�����ַ����ĳ���
//int length(); ���ǲ�֪������������ֹ�����ǲ����������������ж೤��
/*
int SString::length()
{
	return 0;
}
*/

//�õ�����ַ����ĳ���
//int getLength();
unsigned int SString::getLength()
{
	return this->length;
}

//��ȡ���ǵ��ַ���
//char* getCh();
unsigned char* SString::getCh()
{
	return this->ch;
}


//һ��ƥ���Ӵ����㷨ʵ��
/************************************************************************/
/*
�����Ӵ�T������S�е�posλ��֮���λ�ã��������ڣ�����0
*/
/************************************************************************/
//int BFindex(SString T, int pos);
int SString::BFindex(SString T, int pos)
{
	//���������������α�������������Ǳ�����λ��
	int i = pos, j = 1;

	//Ȼ������������unsigned char ��ָ����ָ�������������Ƚϵ��ַ���
	unsigned char *p1 = this->getCh(), *p2 = T.getCh();
	//��ʼѭ���Ƚϣ�����һ��ƥ�䵽�˵�ʱ�����Ǿͽ��űȽϺ���ģ�����м��������ô���ǻ�ͷ���±Ƚ���������һ��Ԫ����Ϊ��ʼ
	//��ס��ô���ַ����ĵ�һ��Ԫ��ʱ����Ŷ����ģ����Ǵ��±�Ϊ1���Ǹ���ʼ��Ű���1
	while (i <= this->getLength() && j <= T.getLength())
	{
		//���ƥ�䵽�����Ǿ�һ��ƥ��ڶ���Ԫ��
		if (p1[i] == p2[j])
		{
			++i;
			++j;
		}
		else
		{
			//�������Ǿͻص����ĵڶ���Ԫ�غ��Ӵ����бȽ�
			i = i - j + 2;	//��һ��Ԫ��
			j = 1;	//�Ӵ���ͷ��ʼ
		}
	}

	//��󿴿��ǲ�������ȫƥ�䵽��
	if (j > T.getLength())
		return i - T.getLength();	//��ȡ���λ�õĵط�
	else
		return 0;
}