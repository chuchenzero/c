//双亲表示法（顺序存储）
#define MAX_TREE_SIZE 1000  //树中最多结点数
typedef struct {            //树的节点定义
    Element data;           //数据元素
    int parent;             //双亲位置域
}PTNode；
typedef struct{             //数的类型标识
    PTNode nodes[MAX_TREE_SIZE]; //双亲表示
    int n;                       //结点数        
}  

//孩子表示法（顺序+链式存储）
struct CTNode { 
    int child;      //孩子节点在数组中的位置
    struct CTNode *next;    //下一个孩子的位置
    }
typedef struct {
    Element data;
    struct CTNode *firstchild; //第一个孩子
}CTBox;
typedef struct {
    CTBox nodes[MAX_TREE_SIZE];
    int n, r;   //结点数和根的位置
}CTree;

//孩子兄弟表示法————树和二叉树的转化
typedef struct CSNode {
    Element data;       //数据域
    struct CSNode *firstchild,*nextsibling; //二叉树的左右两个节点分别指向第一个孩子和右侧兄弟节点
}CSNode,*CSTree;