class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pair;
        for(int i=0; i<position.size(); i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        vector<double> time;
        for(const auto& p: pair){
            time.push_back((double)(target-p.first)/(p.second));
            if(time.size()>=2 && time.back()<=time[time.size()-2])
                time.pop_back();
        }
        return time.size();
    }
};