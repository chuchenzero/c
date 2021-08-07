//KMP算法
int Index (SString S,SString T){
    int i=1,j=1;
    while(i<=S.length && j<=T.length，next[]){
        if(j==0||S.ch[i]==T.ch[j]){
            ++i;++j;        
        }
        else{
           j=next[j];       //模式串右移
        }
    }
    if(j>T.length)          
        return i-T.length;  
    else
        return 0;
}