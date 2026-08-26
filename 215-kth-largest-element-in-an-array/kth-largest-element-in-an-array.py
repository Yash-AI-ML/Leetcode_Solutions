class Solution:
    import heapq
    def findKthLargest(self, nums: List[int], k: int) -> int:
        h=[]
        for x in nums:
           heapq.heappush(h,x)
           if len(h)>k:
             heapq.heappop(h)
        return heapq.nlargest(k,h)[-1]