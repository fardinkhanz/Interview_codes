class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        A, B= nums1, nums2
        total=len(nums1)+ len(nums2)
        half=total//2
        if len(nums2) < len(nums1):
            A,B=B,A
        l,r=0,len(A)-1
        while True:
            m=(l+r)//2
            m2=half-m-2

            aleft=A[m] if m >=0 else float("-infinity")
            aright=A[m+1] if (m+1) < len(A) else float("infinity")
            bleft=B[m2] if m2 >=0 else float("-infinity")
            bright=B[m2+1]  if (m2+1) < len(B) else float("infinity")   

            if aleft<=bright and aright>=bleft:
                if total%2:
                    return min(aright,bright)
                    
                else:
                    return (max(aleft,bleft)+min(aright,bright))/2
            elif aleft > bright:
                r=m-1
            else:
                l=m+1

                    






        
