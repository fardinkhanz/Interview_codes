class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:

        cnt=0
        
        students_q=deque(students)
        sandwich_st=[]
        for sand in reversed(sandwiches):
            sandwich_st.append(sand)

        while students_q and cnt < len(students_q):
            if sandwich_st[-1] == students_q[0]:
                sandwich_st.pop()
                students_q.popleft()
                cnt=0  
                
            else:
                students_q.append(students_q[0])
                students_q.popleft()
                cnt+=1
        return len(students_q)        
  
