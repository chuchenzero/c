typedef struct BiTNode{
    Element data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

//先序遍历————第一次路过时访问节点
void PerOrder(BiTree T){
    if(T!=NULL){    //T非空
        visit(T);   //访问根节点
        PerOrder(T->lchild);    //递归遍历左子树
        PerOrder(T->rchild);    //递归遍历右子树
    }
}

//中序遍历————第二次路过时访问节点
void InOrder(BiTree T){
    if(T!=NULL){    //T非空
        InOrder(T->lchild);    //递归遍历左子树
        visit(T);              //访问根节点
        InOrder(T->rchild);    //递归遍历右子树
    }
}

//求树的深度（应用）
int treeDepth(BiTree T){
    if(T==NULL){return O;}
    else{
        int l=treeDepth(T->lchild);
        int r=treeDepth(T->rchild);
        //树的深度=Max（左子树深度，右子树深度）+1
        return l>r ? l+1:r+1;
    }
}