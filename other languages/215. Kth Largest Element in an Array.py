class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        '''
        k=len(nums)-k

        def quicksort(l,r):
            pivot,p=nums[r],l
            for i in range(l,r):
                if nums[i] <= pivot:
                    nums[p],nums[i]=nums[i],nums[p]
                    p+=1
            nums[p],nums[r]=nums[r],nums[p]

            if k < p :   return quicksort(l,p-1)
            elif k > p:   return quicksort(p+1,r)
            else: return nums[p]
        return quicksort(0,len(nums)-1)
        '''
        heap=nums[:k]
        heapq.heapify(heap)
        for num in nums[k:]:
            if num > heap[0]:
                heapq.heappop(heap)
                heapq.heappush(heap,num)
        return heap[0]        
        
