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
//=====����ת����=========
// 
Node* changeArrayToNode(int arr[], int length) {
	if (arr == NULL || length <= 0) { return NULL; }

	Node* sentineNode = new Node;  //�����ڱ��ڵ�
	Node* tempNode = sentineNode;  //tempNode����ָ���ڱ��ڵ�
	for (int i = 0; i < length; i++) {
		Node* newNode = new Node;
		newNode->date = arr[i];
		tempNode->next = newNode;    //��ʱ�ڵ㡮���ָ�롯ָ���½ڵ�
		tempNode = newNode;        //���½ڵ㸳����ʱ����tempNode
	}
	return sentineNode->next;
}

void del_x(node*& L, int x) {
	node* p;
	if (L == NULL) {

	}

}
//=========��β����ʼ�������
void R_Print(node*& L) {
	//��β��ͷ�����������ÿ������ֵ
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




