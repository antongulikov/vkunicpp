#include <iostream>

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
		cerr << "List\n";
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
		cerr << "List out\n";
		while (head->next) {
			deleteNode(head->next->value);
		}
		delete head;
	}
};

struct Stack : List {
	Stack() {		
		cerr << "Stack\n";
	}

	void push(int value) {
		addNode(value);
	}

	int pop() {
		int result = -1;
		if (head->next) {
			result = head->next->value;
		}
		deleteNode(result);
		return result;
	}

	int top() {
		if (head->next) {
			return head->next->value;
		}
		return -1;
	}

	void print() {
		printList();
	}

	~Stack(){		
		cerr << "Stack out\n";
	}
};

int main() {
	Stack st;	
	st.push(10);
	st.push(100);
	st.push(11);
	st.print();
	cout << st.pop() << " " << 1 + st.pop() << " " << st.top() << endl;
	st.print();	
	return 0;
}