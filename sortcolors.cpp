#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
      void sortColors(vector<int>& nums) {
          /**
   * Definition for singly-linked list.
   * struct ListNode {
   *     int val;
   *     ListNode *next;
   *     ListNode() : val(0), next(nullptr) {}
   *     ListNode(int x) : val(x), next(nullptr) {}
   *     ListNode(int x, ListNode *next) : val(x), next(next) {}
   * };
   */
  class Solution {
  public:
      ListNode* sortList(ListNode* head) {
  
          if(head == NULL || head->next == NULL)
      {
          return head;
      }
  
      ListNode* zeroHead = new ListNode(-1);
      ListNode* oneHead = new ListNode(-1);
      ListNode* twoHead = new ListNode(-1);
  
      ListNode* zero = zeroHead;
      ListNode* one = oneHead;
      ListNode* two = twoHead;
      ListNode* temp = head;
  
  
      while(temp)
      {
          if(temp->val == 0)
          {
              zero->next =temp;
              zero = temp;
  
          }
          else if(temp->val == 1)
          {
              one->next = temp;
              one = temp;
  
          }
          else{
              two->next = temp;
              two = temp;
  
          }
          temp = temp->next;
      }
  
      zero->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
      one->next = twoHead->next;
      two->next = NULL;
  
      ListNode* newHead = zeroHead->next;
  
      delete zeroHead;
      delete oneHead;
      delete twoHead;
  
      
      return newHead;
          
      }
  };
      }
  };