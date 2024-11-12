int romanToInt(char* s) {
    int i;
    int l = strlen(s);
    int soma = 0;
    int vector[17];
    vector[l] = 0;
    for(i=0;i<l;i++){
        if(*(s+i)=='I'){
            vector[i] = 1;
        }else if(s[i]=='V'){
            vector[i]=5;
        }else if(s[i]=='X'){
            vector[i]=10;
        }else if(s[i]=='L'){
            vector[i]=50;
        }else if(s[i]=='C'){
            vector[i]=100;
        }else if(s[i]=='D'){
            vector[i]=500;
        }else if(s[i]='M'){
            vector[i]=1000;
        }
    }
    for(i=0;i<l;i++){
        if(vector[i]>=vector[i+1]){
            soma += vector[i];
        }else{
            soma -= vector[i];
        }
    }
    return soma;
}