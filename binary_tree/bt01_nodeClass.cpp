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

//����ڵ�ṹ; 
struct ListNode
{
	int val; //���ݣ�
	ListNode * next;
	ListNode(int _val,ListNode *_next=NULL):val(_val),next(_next){}
	

} ;

/*�������� ��ת����*/ 
//��ת���� 

/*�����ǵ�һ���汾,��Ҫע������
   1. ԭ��ʼ�ڵ�next=null
   2.  ���ͷ���Ӧ��ָ�����; 
 */ 
ListNode * ReverseList(ListNode *head)
{
	//������ֱ�ӷ���; 
	if(head == NULL)
		return head;
	
	
	ListNode * pre = head;
	head = head->next;
	pre->next = NULL;//�������Ҫ��; 
	while(head!=NULL)
	{
		post = head->next;
		head->next = pre;
		pre = head;
		head = post;
	}
	
	head = pre;//�����
	return head;
}


