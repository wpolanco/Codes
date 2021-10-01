//Function to find the next greater element for each element of the array.

    vector<long long> nextLargerElement(vector<long long> a, int n){
        
        vector<long long> v;
        
        stack<long long> st;
        
        for(int i=a.size()-1;i>=0;i--){
            if(st.size() == 0){
                v.push_back(-1);
            }
            else if (st.top() > a[i]){
                v.push_back(st.top());
            }
            else if(st.top() <= a[i]  ){
                while(st.size() > 0 && st.top()<=a[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    v.push_back(-1);
                }
                else {
                    v.push_back(st.top());
                }
                
            }
            st.push(a[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }