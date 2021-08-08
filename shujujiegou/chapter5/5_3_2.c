//线索二叉树的存储结构描述
typedef struct ThreadNode {
    Element data;       //数组元素
    struct ThreadNode *lchild,*rchild;      //左右孩子指针
    int ltag,rtag;                          //左右线索标志
}ThreadNode,*ThreadNode;