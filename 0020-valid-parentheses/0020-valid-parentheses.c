bool isValid(char* s) {
    int l = strlen(s);
    int numbola = 0;int numquadrado = 0;int numchave = 0;int i;
    for(i=0;i<l;i++){
        switch(s[i]){
            case '(':
                numbola++;
                if(s[i+1] == ']' || s[i+1] == '}'){
                    return false;
                }
                break;
            case ')':
                if(numbola == 0){
                    return false;
                }
                numbola--;
                break;
            case '[':
                numquadrado++;
                if(s[i+1] == ')' || s[i+1] == '}' || s[i+1] == '(' && l == 6){
                    return false;
                }
                break;
            case ']':
                if(numquadrado == 0){
                    return false;
                }
                numquadrado--;
                break;
            case '{':
                numchave++;
                if(s[i+1] == ')' || s[i+1] == ']'){
                    return false;
                }
                break;
            case '}':
                if(numchave == 0){
                    return false;
                }
                numchave--;
                break;
        }
    }
    if(numbola!=0||numquadrado!=0||numchave!=0){
        return false;
    }else{
        return true;
    }
}