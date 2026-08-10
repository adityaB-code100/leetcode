class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


class MyLinkedList:

    def __init__(self):
        self.head = None

    def get(self, index: int) -> int:
        temp = self.head

        while temp and index > 0:
            temp = temp.next
            index -= 1

        if temp:
            return temp.val

        return -1

    def addAtHead(self, val: int) -> None:
        nn = Node(val)

        nn.next = self.head
        self.head = nn

    def addAtTail(self, val: int) -> None:
        nn = Node(val)

        if self.head is None:
            self.head = nn
            return

        temp = self.head

        while temp.next:
            temp = temp.next

        temp.next = nn

    def addAtIndex(self, index: int, val: int) -> None:

        if index == 0:
            self.addAtHead(val)
            return

        temp = self.head
        temp2 = None

        while temp and index > 0:
            temp2 = temp
            temp = temp.next
            index -= 1

        if index > 0:
            return

        nn = Node(val)

        temp2.next = nn
        nn.next = temp

    def deleteAtIndex(self, index: int) -> None:

        if self.head is None:
            return

        if index == 0:
            self.head = self.head.next
            return

        temp = self.head
        temp2 = None

        while temp and index > 0:
            temp2 = temp
            temp = temp.next
            index -= 1

        if temp is None:
            return

        temp2.next = temp.next


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)