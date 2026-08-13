class MyQueue:

    def __init__(self):
        self.stc1=[]
        self.stc2=[]
        

    def push(self, x: int) -> None:
        while self.stc1:
            self.stc2.append(self.stc1.pop())

        self.stc2.append(x)

        while self.stc2:
            self.stc1.append(self.stc2.pop())
        

    def pop(self) -> int:
        return self.stc1.pop()

    def peek(self) -> int:
        return self.stc1[-1]
        

    def empty(self) -> bool:
        return len(self.stc1)==0
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()