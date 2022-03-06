For a given 2D Matrix before, the corresponding cell (x, y) of the after matrix is calculated as follows:
res = 0;
for(i = 0; i <= x; i++){
    for( j = 0; j <= y; j++){              
        res += before(i,j);
    }
}
after(x,y) = res;
Given an N*M 2D-Matrix after, your task is to find the corresponding before matrix for the given matrix.
  
  
  
  
  class Solution {
    public:
    vector <vector <int>> computeBeforeMatrix(int N,int M,vector<vector<int>>after){
           vector<vector<int>>before (N,vector<int>(M));
            for (int i=0;i<N;i++){
              for(int j=0;j<M;j++){
                prevCol=(j==0)?after[i][j-1];
                prevRow=(i==0)?after[i-1][j];
                
                if(i==0||j==0){
                  before[i][j]=after[i][j]-prevCol-prevRow;
                  
                }
                else{
                before[i][j]=after[i][j]-prevCol-prevRow+after[i-1][j-1];
                }
              }
            }
      return before;
    }
  };
