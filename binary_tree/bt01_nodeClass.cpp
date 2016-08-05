/************************************************************************
 * �����ǩ : �������Ľṹ���� 
 * �������� :
 * �� �� �� :  
 * �� �� �� :  v1.0
 * ˵    �� :  
 * ��    �� :  dragonfive
 * ����ʱ�� :  
 * ����ʱ�� :  
************************************************************************
 * Copyright @dragonfive 2016 . All rights reserved.
************************************************************************/

#include <iostream>
using namespace std;

template<class DataType>//�������Ͳ���
struct Node//���ṹ�� 
{
	 DataType data=NULL;
	 Node * left = NULL;
	 Node * right = NULL; 
	 Node(DataType d):data(d){}
	 void addlChild(Node<DataType> *const add)//�������; 
	{
		if(left == NULL)
			left = add;
		else
			left->addlChild(add); 
	}
	void addRChild(Node<DataType> *const add)//�������; 
	{
		if(right == NULL)
			right = add;
		else
			right->addRChild(add); 
	}
	 
};
template<class DataType>//�������Ͳ���
class BinTree
{
private:
	Node<DataType> *root=NULL;
public:
	BinTree<DataType>(){
		root = new Node<int>(0);
	}//����һ������;
	void addlTree(Node<DataType> *const add)//�������; 
	{

		root->addlChild(add);
	}
	void addRTree(Node<DataType> *const add)//�������; 
	{
		root->addRChild(add);
	}
};


int main()
{
	BinTree<int> B;
	Node<int> n1(10);
	Node<int> n2(20);
	B.addlTree(&n1);
	B.addRTree(&n2);
	return 0;
}

