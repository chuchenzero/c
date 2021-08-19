//邻接表法
#define  MaxVertices 100
typedef struct node{   //边表 
   int adjvex;
   node* next;  
}EdgeNode;  
  
typedef struct{     //顶点表  
   int vertex;  
   EdgeNode* edgenext;  
}VertexNode;  
  
typedef VertexNode AdjList[MaxVertices];//顶点表数组  
  
typedef struct{   
    AdjList adjlist;  
    int n,e;  
}AdjMatrix; 
// 原文链接：https://blog.csdn.net/qq_39630587/article/details/77409869