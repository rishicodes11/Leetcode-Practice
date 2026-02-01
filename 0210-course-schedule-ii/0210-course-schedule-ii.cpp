class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N=numCourses;
        int P=prerequisites.size();
        vector<vector<int>>adj(N);
        vector<int>indeg(N,0);
        for(int i=0;i<P;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indeg[prerequisites[i][0]]++;
        }
        // now apply kahn
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<N;i++){
            if(!indeg[i]) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(int j=0;j<adj[node].size();j++){
                indeg[adj[node][j]]--;
                if(!indeg[adj[node][j]]) q.push(adj[node][j]);
            }
        }
        return ans.size()== N ? ans : vector<int>{};
    }
};