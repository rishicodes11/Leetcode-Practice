class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // gfg pe dekhle accha soln hai tera with algo likha hai
        int N=numCourses;
        int P=prerequisites.size();
        vector<vector<int>>adj(N);
        vector<int>indeg(N,0);
        for(int i=0;i<P;i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            indeg[prerequisites[i][1]]++; 
        }
        // apply kahn
        queue<int>q;
        int count=0;
        for(int i=0;i<N;i++){
            if(!indeg[i]) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            // go for neighbours and do --
            for(int j=0;j<adj[node].size();j++){
                indeg[adj[node][j]]--;
                if(!indeg[adj[node][j]]) q.push(adj[node][j]);
            }
        }
        return count==N;
    }
};