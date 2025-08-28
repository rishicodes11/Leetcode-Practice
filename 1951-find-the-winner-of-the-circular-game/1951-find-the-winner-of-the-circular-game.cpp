class Solution {
public:

    int winner(int n,int k,vector<bool>& persons,int person_left,int index){
        if(person_left==1){
            for(int i=0;i<n;i++){
                if(persons[i]==0) return i+1;
            }
        }
        int kill=(k-1)%person_left;
        while(kill--){
            index=(index+1)%n;
            while(persons[index]==1){
                index=(index+1)%n;
            }
        }
        persons[index]=1;

        // start from the next alive
        while(persons[index]==1){
        index=(index+1)%n;
        }

        return winner(n,k,persons,person_left-1,index);
    }

    int findTheWinner(int n, int k) {
        vector<bool>persons(n,0);
        return winner(n,k,persons,n,0);
    }
};