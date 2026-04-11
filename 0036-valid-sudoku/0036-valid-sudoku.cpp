class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& boards) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        unordered_map<char,int> mp3;
        unordered_map<char,int> mp4;
        unordered_map<char,int> mp5;
        unordered_map<char,int> mp6;
        unordered_map<char,int> mp7;
        unordered_map<char,int> mp8;
        unordered_map<char,int> mp9;
        
        int n = boards.size();
        int m = boards[0].size();

        for(int i=0;i<n;i++){
            unordered_map<char,int> hori;
            for(int j=0;j<m;j++){
                if(boards[i][j]=='.') continue;
                if(i<=2 && j<=2){
                    if(mp1[boards[i][j]]) return false;
                    mp1[boards[i][j]]++;
                }
                else if((j>2 && j<=5) && (i<=2)){
                    if(mp2[boards[i][j]]) return false;
                    mp2[boards[i][j]]++;
                }
                else if((j>5 && j<=8) && (i<=2)){
                    if(mp3[boards[i][j]]) return false;
                    mp3[boards[i][j]]++;
                }
                else if((j<=2) && (i>2 && i<=5)){
                    if(mp4[boards[i][j]]) return false;
                    mp4[boards[i][j]]++;
                }
                else if((j>2 && j<=5) && (i>2 && i<=5)){
                    if(mp5[boards[i][j]]) return false;
                    mp5[boards[i][j]]++;
                }
                else if((j>5 && j<=8) && (i>2 && i<=5)){
                    if(mp6[boards[i][j]]) return false;
                    mp6[boards[i][j]]++;
                }
                else if((j<=2) && (i>5 && i<=8)){
                    if(mp7[boards[i][j]]) return false;
                    mp7[boards[i][j]]++;
                }
                else if((j>2 && j<=5) && (i>5 && i<=8)){
                    if(mp8[boards[i][j]]) return false;
                    mp8[boards[i][j]]++;
                }
                else if((j>5 && j<=8) && (i>5 && i<=8)){
                    if(mp9[boards[i][j]]) return false;
                    mp9[boards[i][j]]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            unordered_map<char,int> hori;
            for(int j=0;j<m;j++){
                if(boards[i][j]=='.') continue;
                if(hori[boards[i][j]]) return false;
                else hori[boards[i][j]]++;
            }
        }
        for(int j=0;j<m;j++){
            unordered_map<char,int> verti;
            for(int i=0;i<n;i++){
                if(boards[i][j]=='.') continue;
                if(verti[boards[i][j]]) return false;
                else verti[boards[i][j]]++;
            }
        }
        return true;
    }
};