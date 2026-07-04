class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                for(int k = 0; k < 9; k++){
                    if(board[i][j] == board[i][k] and k!=j) return false;
                    if(board[i][j] == board[k][j] and k!=i) return false;
                }
                if((i>=0 and i<=2) and (j>=0 and j<=2)){
                    for(int i1 = 0; i1<= 2;i1++){
                        for(int j1 = 0; j1<= 2;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=0 and i<=2) and (j>=3 and j<=5)){
                    for(int i1 = 0; i1<= 2;i1++){
                        for(int j1 = 3; j1<= 5;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=0 and i<=2) and (j>=6 and j<=8)){
                    for(int i1 = 0; i1<= 2;i1++){
                        for(int j1 = 6; j1<= 8;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=3 and i<=5) and (j>=0 and j<=2)){
                    for(int i1 = 3; i1<= 5;i1++){
                        for(int j1 = 0; j1<= 2;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=3 and i<=5) and (j>=3 and j<=5)){
                    for(int i1 = 3; i1<= 5;i1++){
                        for(int j1 = 3; j1<= 5;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=3 and i<=5) and (j>=6 and j<=8)){
                    for(int i1 = 3; i1<= 5;i1++){
                        for(int j1 = 6; j1<= 8;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=6 and i<=8) and (j>=0 and j<=2)){
                    for(int i1 = 6; i1<= 8;i1++){
                        for(int j1 = 0; j1<= 2;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=6 and i<=8) and (j>=3 and j<=5)){
                    for(int i1 = 6; i1<= 8;i1++){
                        for(int j1 = 3; j1<= 5;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
                if((i>=6 and i<=8) and (j>=6 and j<=8)){
                    for(int i1 = 6; i1<= 8;i1++){
                        for(int j1 = 6; j1<= 8;j1++){
                            if(board[i][j] == board[i1][j1] and (i!=i1 and j!=j1)) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
