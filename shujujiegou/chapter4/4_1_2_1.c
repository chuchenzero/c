//定长顺序存储表示
#define MAXLEN 255      //预定义最大串长为255  
typedef struct {
    char ch[MAXLEN];    //每个分量存储一个字符；每个char字符占1B
    int length;         //串的实际长度，即255
}SString;

//堆分配存储表示
typedef struct {
    char *ch;           //按串长分配存储区，ch指向串的基地址
    int length;         //串的实际长度
}HString;

//块链存储表示
typedef struct StringNode {
    char ch;                 //每个节点存一个字符
    struct StringNode * next;''
}StringNode, * String;      //存储密度低：每个字符1B，每个指针4B，存一个字符要5B

typedef struct StringNode {
    char ch[4];             //每个节点存4个字符
    struct StringNode * next;''
}StringNode, * String;      //存储密度提高，用#补空