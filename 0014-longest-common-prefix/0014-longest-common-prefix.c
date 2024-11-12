char* longestCommonPrefix(char** strs, int strsSize) {
    int i=0;int i2 = 0;int i3 = 0;
    int smalleststr=strlen(strs[0]);
    char *stringresp = malloc(202*sizeof(char));

    for(i=0;i<strsSize;i++){
        if(strlen(strs[i])<smalleststr){
            smalleststr = strlen(strs[i]);
        }
    }

    for(i=0;i<smalleststr;i++){
        stringresp[i] = strs[0][i];
        for(i2=0;i2<strsSize;i2++){
            if(strs[i2][i]==stringresp[i]){
                continue;
            }else{
                i3 = 1;
                break;
            }
        }
        if(i3==1){
            break;
        }
    }
    stringresp[0] = '\0';
    if(i2!=0){
        printf("aa");
        for(i3=0;i3<i;i3++){
            stringresp[i3] = strs[0][i3];
        }
        stringresp[i3]='\0';
    }else{
       for(i3=0;i3<i;i3++){
            stringresp[i3] = strs[0][i3];
        } 
        stringresp[i3]='\0';
    }
    return stringresp;
}