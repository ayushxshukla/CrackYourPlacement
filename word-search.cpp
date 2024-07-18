class Solution {
public:


vector<int> help1={0,1,0,-1};
vector<int> help2={1,0,-1,0};
bool search(vector<vector<char>> &b, int i, int j, string &word, int k){

    int n=b.size();
    int m=b[0].size();
    
    if(k==word.size()){
        return true;
    }  

    if(i<0||i>=n||j<0||j>=m){
        return false;
    }

    if(b[i][j]=='#'||b[i][j]!=word[k]){
        return false;
    }

    char x=b[i][j];
    b[i][j]='#';
    for(int l=0;l<4;l++){
        int new_i=i+help1[l];
        int new_j=j+help2[l];
        if(search(b,new_i,new_j,word,k+1)){
            return true;
        }
    }

     b[i][j]=x;

    return false;

}
    bool exist(vector<vector<char>>& b, string word) {
        int n=b.size();
        int m=b[0].size();
        bool ans=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (search(b,i,j,word,0)){
                    ans=true;
                    break;
                } 
            }
            if(ans){
                break;
            }
        }

        return ans;
    }
}; 