class CountSquares {
public:
    map<pair<int,int>,int> m;
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        m[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int res=0;
        int x=point[0];
        int y=point[1];
        for(auto i:m){
            int qx=i.first.first,qy=i.first.second;
            if(x!=qx&&y!=qy&&abs(x-qx)==abs(y-qy)){
                int f1=m[{qx,qy}];
                int f2=m[{x,qy}];
                int f3=m[{qx,y}];
                res+=f1*f2*f3;
            }
        }
        return res;
    }
};
