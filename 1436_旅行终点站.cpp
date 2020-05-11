class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> mymap;
        int path[200];
        int nums = 0;
        for(int i = 0; i < 200; i++)
         path[i] = -1;
        for(int i = 0; i < paths.size(); i++){
            if(mymap.count(paths[i][0]) == 0){
                mymap[paths[i][0]] = nums++;
            }
            if(mymap.count(paths[i][1]) == 0){
                mymap[paths[i][1]] = nums++;
            }
            path[mymap[paths[i][0]]] = mymap[paths[i][1]];
        }
        int target = 0;
        for(int i = 0; i < nums; i++)
            if(path[i] == -1){
                target = i;
                break;
            }
        for(auto p : mymap)
            if(p.second == target)
                return p.first;
        return "NONE";
    }
};