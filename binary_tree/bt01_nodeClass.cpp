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

//链表节点结构; 
struct ListNode
{
	int val; //数据；
	ListNode * next;
	ListNode(int _val,ListNode *_next=NULL):val(_val),next(_next){}
	

} ;

/*基本操作 翻转链表*/ 
//反转链表 

/*下面是第一个版本,需要注意两点
   1. 原起始节点next=null
   2.  最后头结点应该指向最后; 
 */ 
ListNode * ReverseList(ListNode *head)
{
	//空链表直接返回; 
	if(head == NULL)
		return head;
	
	
	ListNode * pre = head;
	head = head->next;
	pre->next = NULL;//这个很重要啊; 
	while(head!=NULL)
	{
		post = head->next;
		head->next = pre;
		pre = head;
		head = post;
	}
	
	head = pre;//最后让
	return head;
}


