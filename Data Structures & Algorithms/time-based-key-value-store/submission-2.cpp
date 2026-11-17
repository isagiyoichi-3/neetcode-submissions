class TimeMap {
public:
    map<string, vector<pair<int,string>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string res="";
        if(m.find(key)==m.end()){
            return "";
        }
            const auto& v = m[key];
            int n=v.size();
            int l=0;
            int r=n-1;
            int mid;
            while(l<=r){
                mid=l+(r-l)/2;
                if(v[mid].first==timestamp){
                    return v[mid].second;
                }
                else if(v[mid].first<timestamp){
                    res=v[mid].second;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return res;
       
        
    }
};
