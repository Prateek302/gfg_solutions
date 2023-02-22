class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        int n =sizeof(A);
        int mid= (l+h)/2;
        while(l<=h){
            
            if(A[mid] == key){
                return mid;
            }
            if(A[l]<= A[mid]){
                if(key >= A[l] && key <= A[mid]){
                    h = mid-1;
                }
                else{
                    l = mid +1;
                }
            }
            else{
                if(key >= A[mid] && key <= A[h]){
                    l = mid + 1;
                }
                else{
                    h= mid-1;
                }
            }
            mid = (l+h)/2;
        }
        return -1;
    }
};
