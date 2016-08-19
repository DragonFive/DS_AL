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

//单链表节点结构; 
struct ListNode
{
	int val; //数据；
	ListNode * next;
	ListNode(int _val,ListNode *_next=NULL):val(_val),next(_next){}
	

} ;

/*基本操作 翻转链表*/ 
//反转链表 下面是单向链表的反转;  下面的操作其实是没有考虑头结点的存在; 

/*下面是第一个版本,需要注意两点
   1. 原起始节点next=null
   2.  最后头结点应该指向最后; 
   
   所以我们可以总结得出：如果要遍历操作链表，其实逻辑上只需要注意
   训练里面每一步的操作，而在细节上开头和结尾也要注意判断; 
 */ 
ListNode * reverseList_1(ListNode *head_1)//这是第一版 我自己写的，其实代码有些多; 
{
	
	ListNode * head = head_1->next;//考虑到头结点的存在; 
	//空链表直接返回; 
	if(head == NULL)
		return head;
	
	
	ListNode * pre = head;
	head = head->next;
	pre->next = NULL;//这个很重要啊;原始节点的Next指向NULL 
	while(head!=NULL)
	{
		post = head->next;
		head->next = pre;
		pre = head;
		head = post;
	}
	
	//head = pre;//最后让头结点指向最后一个节点; 
	
	head_1->next = pre;
	return head_1;
}

//单向链表的反转2;  
//下面这个版本来自 http://algorithm.yuanbin.me/zh-hans/basics_data_structure/linked_list.html
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


// 下面是双向链表
struct DListNode
{
	DListNode *pre,*next;
	int val;
	DListNode(int _val,DlistNode * _pre=NULL,DlistNode *_next=NULL):val(_val),pre(_pre),next(_next){}
	
};

//十分简短的一个反转双向链表的方式; 
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


 


 



