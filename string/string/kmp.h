/*
*���ܣ�ʹ��kmp�㷨���ַ�������ƥ�䣬
*		1��һ�����������������ģʽ��ƥ�䵽��һ���̶ȣ�����ƥ�䵽��5������ģ���ȶ���5�󣩣����ǵ�6���ַ������
			��ô���ǽ�������Ҫƥ�������������ʲô�ط���ʼ��Ҳ������ƥ���5���к����м���������ģʽ���Ŀ�ͷ����ô������ο�ʼ��һ���Ӵ���ƥ��
		2���������ĵ�i���ַ���ģʽ���ĵ�j���ַ�ƥ�䲻�ȵ�ʱ�򣬼����ʱӦ�ú�ģʽ�е�k��k<j)���ַ������Ƚ�
		3�������Ѿ��õ�ƥ����ַ�����k======================================��ģʽ��k����ʼ�Ƚϣ�k-1���ǿ�ʼ�µ�ƥ���ʱ��ǰ�治�ñȽϵĸ���
		4��j=================================ģʽ����j���ַ�ʧ�䣨ǰ���ǴαȽϵõ��Ľ������һ�ξ����õ�k���ǴΣ�
		5��i=================================������i���ַ�ʧ��
		6�������ȼ���p:1��p:k-1��ģʽ����Ȼ��s:1��s:m������
		7��ģʽ���к�벿�ֺ�����ǰ���غϣ�����Ҫ������ƥ��Ĳ�����  { p:j-k+1 ������ p:j-1 }  �����������ģʽ���к������󲿷��غϵĵط�
			j-k+1�����������ģʽ����ǰ�治���ٺ������Ƚϵ���ʼλ�ã���ʵ���ǰ�ʧ��ĵط�ǰ�ƺ��治�ñȽϵĸ���j-(k-1)
		8������������Ҳ����ǰ��k-1���ַ���Ҳ�������ǲ��ñȽϵ���Щ�ַ���ʼλ��  { s:i-(k-1)������s:i-1 }
		9�����Ͽɵ�ģʽ�����Ѿ�����Ҫ�������ȽϵĲ���Ҳ����  { p:1������p:k-1 } �� { s:i-(k-1)������s:i-1 } ���
		10����{ s:i-(k-1)������s:i-1 } �������Ǻ��治�ñȽϵĲ����ֺ� { p:j-k+1 ������ p:j-1 }���
		11����ô  { p:j-k+1 ������ p:j-1 }  ��  { p:1������p:k-1 } ���
		12������ģʽ������11�����Ӵ���ʱ������ֻ��Ҫ�������ڲ���ȵĵط���ʼ�����Ӵ�ֻ��Ҫ�ӵ�k���ַ���ʼ�������ĵ�i���ַ���ʼ�Ƚ�
		13����ô���ǿ��Ը���j��ֵ����k��ֵ��Ҳ������һ��k��ֵ��next[j],������next[j] = k - 1;
		14������k�Ĺ�ʽ���� { p:j-k+1 ������ p:j-1 }  ==  { p:1������p:k-1 } ���� 1 < next[j] < j ȡ���ֵ��Ҳ���ǿ��Բ��ñȽϵ����ֵ��������{ p:j-k+1 ������ p:j-1 }  ==  { p:1������p:k-1 }��������Ų���һ��
		15��-----------------------------------��λ�ȡ��Ӧ{ p:j-k+1 ������ p:j-1 }  ==  { p:1������p:k-1 }��kֵ-------------------------------------------------------------------------------------------------------------------------
		16������ʹnext[j] = k,��ģʽ����ƥ��������1 < next[j] < j ��ȡ��kֵ��
		17�����Ǽ���next[j] = k���Ե��Ƴ���һ��next[j+1]��ֵ��ͨ��p:k��p:j��ֵ�Ƿ����
		18��������ǰ�ģʽ������������ģʽ�����бȽϣ�Ѱ����ͬ�Ĳ���
		19������ģʽ����next���ݺ�����Ҫƥ��������޹أ�ֻ�����ǵ�ģʽ���Լ����
*ʱ�䣺2015��7��18��19:12:23��2015��7��26��16:37:17
*�ļ���kmp.h
*���ߣ�cutter_point
*/

#ifndef KMP_H
#define KMP_H

#include "SString.h"

class KmpString : public SString
{
	int *next;
public:
	KmpString(unsigned char *css, unsigned int len) :SString(css, len) {}
	int index_KMP(SString T, unsigned int pos);
	void get_next(SString T);
	int* getNext() { return next; }
};



#endif


