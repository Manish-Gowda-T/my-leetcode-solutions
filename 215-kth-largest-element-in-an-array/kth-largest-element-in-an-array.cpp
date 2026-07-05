class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue< int ,vector<int> ,greater<int> > MinHeap;
        for(int i=0 ; i<nums.size(); i++){
            if(MinHeap.size() < k){
                MinHeap.push(nums[i]);
            }
            else if(nums[i] > MinHeap.top()){
                MinHeap.pop();
                MinHeap.push(nums[i]);
            }
        }
        return MinHeap.top();
    }
};







// this is the sol i came up with 
//but later i learnt max heap is  slower and takes more space 
// O(n + k log n) time and space is o(n)

/*class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> MaxHeap(nums.begin(),nums.end());
        for (int i =1 ; i <k ; i++){
            MaxHeap.pop();
        }
        return MaxHeap.top();

    }
};*/