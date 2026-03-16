# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def swapNodes(self, head, k):
        A, B = head, head
        for i in range(1, k): A = A.next
        nodeK, A = A, A.next
        while A: A, B = A.next, B.next
        nodeK.val, B.val = B.val, nodeK.val
        return head
       