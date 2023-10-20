class NestedIterator:
    def __init__(self, nestedList: List[NestedInteger]):
        self.stack: List[NestedInteger] = []
        self.addInteger(nestedList)
        
    
    def next(self) -> int:
        return self.stack.pop().getInteger()
        
    
    def hasNext(self) -> bool:
        while self.stack and not self.stack[-1].isInteger():
            self.addInteger(self.stack.pop().getList())
        return self.stack    

    def addInteger(self, nestedList:List[NestedInteger] ) -> None:
        for n in reversed(nestedList):
            self.stack.append(n)        
