bool hasCycle(struct ListNode *head) {
    // Fast pointer moves twice as fast as slow pointer
    struct ListNode *fast = head, *slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return true;
        }
    }

    return false;
}