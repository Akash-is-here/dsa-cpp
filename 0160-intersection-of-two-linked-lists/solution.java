/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA==null || headB==null){
            return null;
        }
        ListNode ptra = headA; 
        ListNode ptrb = headB; 
        while(ptra!=ptrb){
            ptra=(ptra==null)?headB:ptra.next;
            ptrb=(ptrb==null)?headA:ptrb.next;
        }

        return ptra;
    }
}
