#include <bits/stdc++.h>

using namespace std;

struct ListNode {
	int value;
	ListNode* next;
	ListNode(int value = 0, ListNode* next = nullptr) : value(value), next(next){}
	~ListNode(){}
};

struct List {
	ListNode *head;	

	List() {
		head = new ListNode(-1);		
	}

	ListNode* getNode(int val) {
		ListNode *start = head;
		while (start) {			
			if (start->value == val)
				return start;
			start = start->next;
		}
		return nullptr;
	}

	void printList() {
		ListNode *start = head;
		while (start->next) {
			start = start->next;
			cout << start->value << " ";
		}
		cout << endl;
		return;
	}

	void addNode(int value, int value_after = -1) {
		ListNode *pivot = getNode(value_after);
		cerr << "Got Pivot\n";
		if (!pivot) {
			cout << "No such element!\n";
			return;
		}
		ListNode *insert_node = new ListNode(value, pivot->next);
		pivot->next = insert_node;		
	}

	void deleteNode(int value) {
		ListNode *start = head;
		ListNode *prevNode = head;
		if (!getNode(value)) {
			cout << "No such element!\n";
			return;
		}
		while (start->next) {
			if (start->value == value) {
				break;
			}
			prevNode = start;
			start = start->next;
		}
		prevNode->next = start->next;
		delete start;		
	}

	~List() {		
		while (head->next) {
			deleteNode(head->next->value);
		}
		delete head;
	}
};

int main() {
	List myList;
	myList.addNode(10);
	myList.addNode(1);
	myList.addNode(3, 1);
	myList.addNode(5, 10);
	myList.printList();
	return 0;
}