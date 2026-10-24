
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)
            return head;

        ListNode dummy(0, head);
        ListNode* temp1 = &dummy;

        // Reach the node just before 'left'
        for (int i = 1; i < left; i++) {
            temp1 = temp1->next;
        }

        ListNode* start = temp1->next;
        ListNode* head2 = nullptr;

        ListNode* after = reverse(start, right - left + 1, head2);

        temp1->next = head2;
        start->next = after;

        return dummy.next;
    }

    ListNode* reverse(ListNode* node, int count, ListNode*& head2) {
        if (count == 1) {
            head2 = node;
            return node->next;
        }

        ListNode* nextNode = reverse(node->next, count - 1, head2);

        node->next->next = node;
        node->next = nullptr;

        return nextNode;
    }
};
