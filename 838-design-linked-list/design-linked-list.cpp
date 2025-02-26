class Node {
public:
    int value;
    Node* next;
    Node(int v) {
        value = v;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head; // Head pointer

    MyLinkedList() {
        head = nullptr; // Initialize an empty list
    }

    int get(int index) {
        if (index < 0) return -1;
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < index; i++) {
            temp = temp->next;
        }
        return (temp != nullptr) ? temp->value : -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < index - 1; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) return;
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) return; // Prevent segmentation fault

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != nullptr && temp->next != nullptr && i < index - 1; i++) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
