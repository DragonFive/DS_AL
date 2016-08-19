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

//������ڵ�ṹ; 
struct ListNode
{
	int val; //���ݣ�
	ListNode * next;
	ListNode(int _val,ListNode *_next=NULL):val(_val),next(_next){}
	

} ;

/*�������� ��ת����*/ 
//��ת���� �����ǵ�������ķ�ת;  ����Ĳ�����ʵ��û�п���ͷ���Ĵ���; 

/*�����ǵ�һ���汾,��Ҫע������
   1. ԭ��ʼ�ڵ�next=null
   2.  ���ͷ���Ӧ��ָ�����; 
   
   �������ǿ����ܽ�ó������Ҫ��������������ʵ�߼���ֻ��Ҫע��
   ѵ������ÿһ���Ĳ���������ϸ���Ͽ�ͷ�ͽ�βҲҪע���ж�; 
 */ 
ListNode * reverseList_1(ListNode *head_1)//���ǵ�һ�� ���Լ�д�ģ���ʵ������Щ��; 
{
	
	ListNode * head = head_1->next;//���ǵ�ͷ���Ĵ���; 
	//������ֱ�ӷ���; 
	if(head == NULL)
		return head;
	
	
	ListNode * pre = head;
	head = head->next;
	pre->next = NULL;//�������Ҫ��;ԭʼ�ڵ��Nextָ��NULL 
	while(head!=NULL)
	{
		post = head->next;
		head->next = pre;
		pre = head;
		head = post;
	}
	
	//head = pre;//�����ͷ���ָ�����һ���ڵ�; 
	
	head_1->next = pre;
	return head_1;
}

//��������ķ�ת2;  
//��������汾���� http://algorithm.yuanbin.me/zh-hans/basics_data_structure/linked_list.html
ListNode * reverseList(ListNode *head)
{
	ListNode * pre=Null,*post = NULL;
	while(head)
	{
		post = head->next;
		head->next = pre;
		pre = head;
		head = post;
	}
	return pre;
}


// ������˫������
struct DListNode
{
	DListNode *pre,*next;
	int val;
	DListNode(int _val,DlistNode * _pre=NULL,DlistNode *_next=NULL):val(_val),pre(_pre),next(_next){}
	
};

//ʮ�ּ�̵�һ����ת˫������ķ�ʽ; 
DListNode * reverseDList(DListNode* head)
{
	DListNode * curr=NULL; 
	while(head)
	{
		curr = head;
		head = curr->next;
		curr->next = curr->pre;
		curr->pre = head;
	}
	return curr;
}


 


 



