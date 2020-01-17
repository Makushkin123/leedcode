//https://leetcode.com/problems/available-captures-for-rook/
class Solution {
public:
int numRookCaptures(vector<vector<char>>& board) {
    
    int x ; 
    
    int y ; 
    
    int temp = 0; 
    
    
    // Поиск ладьи
    
    for(int i = 0; i < 8; i++){
        
        for(int j = 0; j < 8; j++){
            
            if(board[i][j] == 'R'){
                
                x = i;
                
                y = j;
            }
        }
    }
    
    
   
    for(int i = x - 1; i >= 0; i--){
        
        if(board[i][y] == 'p'){
            
            temp++;
            
            break;
        }
        
        if(board[i][y] == 'B'){
            
            break;
        }
    }
    

    
    for(int i = x + 1; i < 8; i++){
        
        if(board[i][y] == 'p'){
            
            temp++;
            
            break;
        }
        
        if(board[i][y] == 'B'){
            
            break;
        }
    }


   
    for(int i = y - 1; i >= 0; i--){
        
        if(board[x][i] == 'p'){
            
            temp++;
            
            break;
        }
        
        if(board[x][i] == 'B'){
            
            break;
        }
    }
    
    
    for(int i = y + 1; i < 8; i++){
        
        if(board[x][i] == 'p'){
            
            temp++;
            
            break;
        }
        
        if(board[x][i] == 'B'){
            
            break;
        }
    }
    
    return temp;
}
};
