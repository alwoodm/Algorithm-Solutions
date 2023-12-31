# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def linkedListIterator(head):
    while head:
        yield head.val
        head = head.next

def createLinkedList(values):
    head = None
    for val in reversed(values):
        head = ListNode(val, head)
    return head

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        list1 = list(linkedListIterator(l1))
        list2 = list(linkedListIterator(l2))
        list1.reverse()
        list2.reverse()
        list1 = int(''.join(map(str, list1)))
        list2 = int(''.join(map(str, list2)))
        answer = list(str(list1 + list2))
        answer.reverse()
        return createLinkedList(answer)

        