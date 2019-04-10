class Solution {
    class disjointSet {
        private:
            vector<int> size;
            vector<int> parent;
            
            int find(int x){
                if(parent[x]!=x){
                    parent[x]=find(parent[x]);
                }
                return parent[x];
            }
        
        public:
            int count;
        
            disjointSet(int N){
                this->size = vector<int>(N,0);
                this->parent =vector<int>(N,-1);
                for(int i= 0; i<N;i++){
                    parent[i]=i;
                }
                count = N;
            }
            void unionSet(int x, int y){
                int parentX = find(x);
                int parentY = find(y);
                
                if(parentX == parentY) return;
                
                if (size[parentX] <= size[parentY]) {
                    parent[parentX]=parentY;
                    size[parentY]++;
                } else {
                    parent[parentY]=parentX;
                    size[parentX]++;
                }
                count--;
            }
            
    };
public:
    int removeStones(vector<vector<int>>& stones) {
        int N = stones.size();
        disjointSet set(N);
        for(int i=0;i<stones.size();i++){
            for(int j=i+1;j<stones.size();j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    set.unionSet(i,j);
                }
            }
        }
        return N - set.count;
    }
};
