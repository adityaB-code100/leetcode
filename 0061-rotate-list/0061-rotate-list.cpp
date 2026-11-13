
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        int count = 0;
        ListNode* temp = head;

        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        // Calculate length
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }

        k = k % count;

        if(k == 0) {
            return head;
        }

        // Find the position of new tail
        count = count - k;

        ListNode* temp2 = nullptr;
        ListNode* head2 = head;

        temp = head;

        while(temp != nullptr) {

            count--;

            if(count == 0) {
                temp2 = temp;
                head2 = temp->next;

                temp2->next = nullptr;
                break;
            }

            temp = temp->next;
        }

        temp = head2;

        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = head;

        return head2;
    }
};
