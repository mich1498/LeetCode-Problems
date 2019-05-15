/* Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

*    push(x) -- Push element x onto stack.
*    pop() -- Removes the element on top of the stack.
*    top() -- Get the top element.
*    getMin() -- Retrieve the minimum element in the stack.
*/
class MinStack {
private: 
    stack <int> mins;
    int min,i=-1 ; 
    vector<int> nums; 
public:
    /** initialize your data structure here. */
    MinStack() {
        min=INT_MAX;
        //int i=-1; 
    }
    
    void push(int x) {
        if (x <=min){
            mins.push(x); //push the minimun onto min stack; 
            min = x; 
            nums.push_back(x);     
            ++i; //increment the index
        }
        else {
            nums.push_back(x);
            ++i;
        }
    }
    
    void pop() {
        if(nums[i]==mins.top()){
            nums.erase(nums.begin()+i);
            mins.pop();
            min=mins.top();
            --i;
        }
        else{
            nums.erase(nums.begin()+i);
            --i;
        }
    }
    
    int top() {
        return  nums[i];
    }
    
    int getMin() {
        return min;
    }
};
