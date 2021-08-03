//SubString(&Sub,S,pos,len):求子串。用Sub返回串S的第pos个字符起长度为len的字串。
bool SubString(SString &Sub,SString S,int pos,int len){
    if (pos+len-1 > S.length)       //子串范围越界
        return false;
    for (int i=pos;i<pos+len;i++)   //遍历pos个字符起长度为len的字串
        Sub.ch[i-pos+1] = S.ch[i];  //i-pos+1 是从1开始的递增
    Sub.length = len;               //定义Sub的长度
    return true;
}


//StrCompare(S,T):比较操作。若S>T则返回值>0;若S=T则返回值=0;若S<T则返回值<0
int StrCompare(SString S,SString T)
{
for(int i=0; i<S.length && i<T.length; i++) /*比较两个串中的字符*/
    if(S.str[i]!=T.str[i])                  /*如果出现字符不同，则返回两个字符的差值*/
        return (S.str[i]-T.str[i]);
return (S.length-T.length);                 /*如果比较完毕，返回两个串的长度的差值*/
}


//Index(S,T): 定位操作
int index(SString S,SString T){
    int i=1; n=String(S),m=String(T);
    SString sub;                    //用于暂存子串
    while(i<=n-m+1){            //遍历每个
        SubString(sub,S,i,m);   //取子串操作
        if(StrCompare(sub,T)!=0) ++i;   
        else return i;  //返回T在S中的位置
    }
    return 0;       //S中不存在与T相等的子串
}