class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l=nums1+nums2
        l.sort()
        le=len(l)
        if le%2 != 0:
            return l[le//2]
        else:
            l1=le//2
            l2=l1-1
            return (l[l1]+l[l2])/2     





        
