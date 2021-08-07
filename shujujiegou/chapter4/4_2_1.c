//朴素模式匹配算法
int Index (SString S,SString T){
    int i=1,j=1;
    while(i<=S.length && j<=T.length){
        if(S.ch[i]==T.ch[j]){
            ++i;++j;        //继续比较后续字符
        }
        else{
            i=i-j+2;        //i回到第二个子串开头的位置
            j=1;            //j回到模式串头
        }
    }
    if(j>T.length)          //j大于模式串长度，代表模式串与主串匹配成功
        return i-T.length;  //返回主串中与模式串匹配成功的子串的开头位置
    else
        return 0;
}
//主串长度 n，模式串长度 m，最坏时间复杂度o=(m*n)