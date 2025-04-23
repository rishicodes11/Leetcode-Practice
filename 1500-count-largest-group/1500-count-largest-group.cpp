class Solution {
public:
    int countLargestGroup(int n) {
        //brute 
        // count the sum of didigts of each number from 1 to n 
        // make a map of sum and put it in it like key 1 has 1,10,100
        //key 2 has 2,11,20,200 and so on 
        //step 1 
        //push all the digitsum into array and then push em into like map
        // or like wait directly push it into map for ease 
        unordered_map<int,vector<int>>mp;
        for(int i=1;i<=n;i++){
            int temp=i;
            int sum=0;
            while(temp){
                sum+=temp%10;
                temp/=10;
            }
            mp[sum].push_back(i);
        }
        for(auto it:mp){
            cout<<it.first;
            for(auto i:it.second){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        int maxlen=0;
        int count=0;
        for(auto &it:mp){
            int currsize=it.second.size();
            if(currsize>maxlen){
                maxlen=currsize;
                count=1;
            }
            else if(currsize==maxlen){
                count++;
            }
        }

        return count;
    }
};