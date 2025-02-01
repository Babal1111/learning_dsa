#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    // Iterative method to reverse the list
    ListNode* reverseListIterative(ListNode* head) {
        ListNode *prev = nullptr, *curr = head, *next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Recursive method to reverse the list
    ListNode* reverseListRecursive(ListNode* head) {
        return reverseHelper(head, nullptr);
    }

private:
    ListNode* reverseHelper(ListNode* curr, ListNode* prev) {
        if (curr == nullptr) return prev;
        ListNode* next = curr->next;
        curr->next = prev;
        return reverseHelper(next, curr);
    }
};

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a test list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original list: ";
    printList(head);

    Solution solution;

    // Testing iterative method
    ListNode* reversedHeadIterative = solution.reverseListIterative(head);
    std::cout << "Reversed list (Iterative): ";
    printList(reversedHeadIterative);

    // Resetting the list for the recursive test
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Testing recursive method
    ListNode* reversedHeadRecursive = solution.reverseListRecursive(head);
    std::cout << "Reversed list (Recursive): ";
    printList(reversedHeadRecursive);

    return 0;
}
