class MyStack:

    def __init__(self):
        self.x1=[]
        self.x2=[]

    def push(self, x: int) -> None:
        self.x2.append(x)
        while self.x1:
            self.x2.append(self.x1.pop(0))
        self.x2,self.x1=self.x1,self.x2

        

    def pop(self) -> int:
        return self.x1.pop(0)
        

    def top(self) -> int:
        return self.x1[0]
        

    def empty(self) -> bool:
        return len(self.x1)==0
       


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()