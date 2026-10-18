int lengthOfLastWord(char* s) {
    int size = strlen(s);
    int i = size-1;
    int c = 0;
    while(i>=0 && s[i] == ' '){
        i--; // skip tailing spaces
    }
    for(int j=i; j>=0 && s[j]!= ' ' ; j--){
        c++;
    }
    return c;
}