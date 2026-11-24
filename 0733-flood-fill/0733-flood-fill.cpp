class Solution {
public:
void dfs(vector<vector<int>>&image , int sr , int sc  , int oldcolor , int newcolor){
    int rows =  image.size();
    int col =  image[0].size();
    if(sc<0|| sr<0 || sr>=rows || sc>=col )
    return;
        if(image[sr][sc]!= oldcolor )
        return;
        image[sr][sc] = newcolor;
        dfs(image , sr-1 , sc , oldcolor ,  newcolor);
        dfs(image , sr+1 , sc , oldcolor ,  newcolor);
        dfs(image , sr , sc-1 , oldcolor ,  newcolor);
        dfs(image , sr , sc+1 , oldcolor ,  newcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor =  image[sr][sc];
        if(oldcolor ==  color)
        return image ; 
        dfs(image ,  sr , sc , oldcolor , color);
        return image;  
    }
};