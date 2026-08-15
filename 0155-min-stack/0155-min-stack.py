class MinStack:

    def __init__(self):
        self.stc=[]

    def push(self, value: int) -> None:
        if not self.stc:
            self.stc.append([value,value])
        else:
            mini=min(value,self.stc[-1][1])
            self.stc.append([value,mini])
        

    def pop(self) -> None:
        self.stc.pop()

    def top(self) -> int:
        return self.stc[-1][0]
        

    def getMin(self) -> int:
        return self.stc[-1][1]

        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()