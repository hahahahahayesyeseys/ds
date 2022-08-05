#include<iostream>
#include<vector>




using namespace std;




//======fuck the Dnodde================
typedef struct DNode {
	int date;
	DNode* prior, * next;

};
typedef struct node {
	int date;
	node* next;


}Node, ListNode;

//
/*
p->next=q->next;
q->next->prior=p;
free(q);



*/
//=====数组转链表=========
// 
Node* changeArrayToNode(int arr[], int length) {
	if (arr == NULL || length <= 0) { return NULL; }

	Node* sentineNode = new Node;  //建立哨兵节点
	Node* tempNode = sentineNode;  //tempNode变量指向哨兵节点
	for (int i = 0; i < length; i++) {
		Node* newNode = new Node;
		newNode->date = arr[i];
		tempNode->next = newNode;    //临时节点‘后继指针’指向新节点
		tempNode = newNode;        //把新节点赋给临时变量tempNode
	}
	return sentineNode->next;
}

void del_x(node*& L, int x) {
	node* p;
	if (L == NULL) {

	}

}
//=========从尾部开始输出链表
void R_Print(node*& L) {
	//从尾到头输出单链表工中每个结点的值
	if (L->next != NULL)
		R_Print(L->next);

	if (L != NULL)
		cout << L->date;
}
void R_Ignore_Head(node* L) {
	if (L != NULL)
		R_Print(L->next);
}

//




