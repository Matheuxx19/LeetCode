char* compressedString(char* word) {
    int i = 0;
    int i2 = 1;
    int i3 = 0;
    int l = strlen(word);
    char *resp = malloc(2*100000*sizeof(char)*2);

    for(i=0;i<l;i++){
        while(word[i]==word[i+1]){
            if(i2<9){
                i++;
                i2++;
            }else{
                i++;
                resp[i3] = i2+'0';
                i3++;
                resp[i3] = word[i];
                i3++;
                i2=1;
            }
        }

        resp[i3] = i2+'0';
        i3++;
        resp[i3] = word[i];
        i3++;
        i2 = 1;
    }
    resp[i3] = '\0';
    return resp;
}