class Solution {
  public:
  void insertAtBottom(stack<int> &St, int element){
     //base case
     if(St.empty()){
          St.push(element);
          return;
     }
    int num = St.top();
    St.pop();
    
    //recursive call
    insertAtBottom(St,element);
    St.push(num);
  }
void reverse(stack<int> &St) {
        // code here
        if(St.empty()){
            return;
        }
        int num = St.top();
        St.pop();
        
        //recursive call
      
        reverse(St);
        insertAtBottom(St, num);
    }
};