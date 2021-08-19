//图的存储——邻接矩阵法
//无向图
#typedef MaxVertexNum 100           //顶点数目的最大值
typedef struct{                     
    char Vex[MaxVertexNum];         //顶点表
    int Edge[MaxVertexNum][MaxVertexNum];       //邻接矩阵，边表
    int vexnum,arcnum;              //图的当前顶点数和边数（弧数）
}MGraph;