/************************************************************************
 * 代码标签 : 二叉树的结构定义 
 * 功能描述 :
 * 类 名 称 :  
 * 版 本 号 :  v1.0
 * 说    明 :  
 * 作    者 :  dragonfive
 * 创建时间 :  
 * 更新时间 :  
************************************************************************
 * Copyright @dragonfive 2016 . All rights reserved.
************************************************************************/

#include <iostream>
using namespace std;

template<class DataType>//数据类型不定
struct Node//结点结构； 
{
	 DataType data=NULL;
	 Node * left = NULL;
	 Node * right = NULL; 
	 Node(DataType d):data(d){}
	 void addlChild(Node<DataType> *const add)//添加左孩子; 
	{
		if(left == NULL)
			left = add;
		else
			left->addlChild(add); 
	}
	void addRChild(Node<DataType> *const add)//添加左孩子; 
	{
		if(right == NULL)
			right = add;
		else
			right->addRChild(add); 
	}
	 
};
template<class DataType>//数据类型不定
class BinTree
{
private:
	Node<DataType> *root=NULL;
public:
	BinTree<DataType>(){
		root = new Node<int>(0);
	}//建立一个空树;
	void addlTree(Node<DataType> *const add)//添加左孩子; 
	{

		root->addlChild(add);
	}
	void addRTree(Node<DataType> *const add)//添加左孩子; 
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

