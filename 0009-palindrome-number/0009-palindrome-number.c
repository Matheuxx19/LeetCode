    bool isPalindrome(int x) {
        int i;
        char str[12];
        sprintf(str, "%d", x);
        int l = strlen(str);
        for(i=0;i<l/2;i++){
            if(str[i]!=str[l-i-1]){
                return false;
            }
        }
        return true;
    }