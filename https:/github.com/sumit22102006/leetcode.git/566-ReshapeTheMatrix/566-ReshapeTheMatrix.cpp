// Last updated: 17/07/2026, 07:22:44
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
    vector <int> v;
    vector<vector<int>> remat;

    int rows = mat.size();
    int cols = mat[0].size();

    if (rows * cols != r * c)
    return mat;

 for(int i = 0 ; i<rows ; i++){
    for(int j=0 ; j< cols ; j++){
        v.push_back(mat[i][j]);
    }
 }

 int index = 0;

for (int i = 0; i < r; i++) {

    vector<int> row;

    for (int j = 0; j < c; j++) {
        row.push_back(v[index]);
        index++;
    }

    remat.push_back(row);
}


    return remat;
    }
};