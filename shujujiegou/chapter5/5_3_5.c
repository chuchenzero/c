//中序线索化

//全局变量 pre ，指向当前访问节点的前驱
ThreadNode *pre=NULL;

//中序线索化二叉树T
void CreateInThread(ThreadTree T){
    pre=NULL        //pre 初始为NULL
    if(T!==NULL){      //非空二叉树才能线索化
        InThread(T);//中序线索化二叉树
        if (pre->rchild==NULL)
            pre->rtag=1;        //处理遍历的最后一个节点
    }
}
//线索二叉树结点
typedef struct ThreadNode {
    Element data;       //数组元素
    struct ThreadNode *lchild,*rchild;      //左右孩子指针
    int ltag,rtag;                          //左右线索标志
}ThreadNode,*ThreadNode;
//中序遍历二叉树，一边遍历一边线索化
void InThread(ThreadTree T){
    if(T!=NULL){    //T非空
        InThread(T->lchild);    //中序遍历左子树
        visit(T);              //访问根节点
        InThread(T->rchild);    //中序遍历右子树
    }
}

void visit(ThreadNode *q){
    if(q->lchild==NULL){        //左子树为空，建立前驱线索
        q->lchild=pre;
        q->ltag=1;
    }
    if(pre!=NULL && pre->rchild==NULL){
        pre->rchild=q;      //建立前驱节点的后继线索
        pre->rtag=1;
    }
    pre=q;
}