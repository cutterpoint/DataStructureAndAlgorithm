/****************************************************************************
ʱ�䣺2015��10��3��19:33:32
���ߣ�cutter_point

�ļ���BinaryTreeNode.h

���ܣ����������������ݽṹ

****************************************************************************/

#ifndef _BSTNODE_H_
#define _BSTNODE_H_

class BSTNode
{
private:
	/**
	 * �����������ڵ��������Ϣ
	 */
	int data;

	/**
	 *  �ڵ��ƽ������
	 */
	int bf;

	/**
	 *  �ڵ����������
	 */
	BSTNode *lchild, *rchild;
};

#endif //_BSTNODE_H_