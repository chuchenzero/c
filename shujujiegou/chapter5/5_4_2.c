//树，森林的遍历

//先根遍历
void PerOrder(TreeNode *R){
    if(R!=NULL){
        visit(R);
        while(R还有下一个子树T){
            PerOrder(T);
        }
    }
}
//后根遍历
void PostOrder(TreeNode *R){
    if(R!=NULL){
        while(R还有下一个子树T)
            PostOrder(T);
        visit(R);
        
    }
}