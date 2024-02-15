// int parent[1000];
// int parentlvl[1000];

// void dsu_set(int n){
//     for(int i = 0;i<n;i++){
//         parent[i]= -1;
//         parentlvl[i]= 1;
//     }
// }

// void dsu_find(int node){
//     while(parent[node]!=-1){
//         node = parent[node];
//     }
//     return node;
// }

// void dsu_union(int a ,int b){
//     int leaderA = dsu_find(a);
//     int leaderB = dsu_find(b);
//     if(leaderA == leaderB){
//         if(parentlvl[leaderA] > parentlvl[leaderB]){
//             parent[leaderB] = leaderA
//         }
//         else if(parentlvl[leaderB] > parentlvl[leaderA]){
//             parent[leaderA] = leaderB;
//         }
//         else{
//             parent[leaderB] = leaderA;
//             parentlvl[leaderA]++;
//         }
//     }
// }

// class Solution {
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
//         bool flag = true;
//         for(int i = 0;i<v;i++){
//             for(int j = 0;j<adj[i].size();j++){
//                 int leaderA = dsu_find(i);
//                 int leaderB = dsu_find(adj[i][j]);
//                 if(leaderA == leaderB){
//                     flag = false;
//                 }
//                 else{
//                     dsu_union(i,adj[i][j]);
//                 }

//             }
//         }
//         return flag;
//     }
// };