bool isSubsequence(char * s, char * t){
    char *p1 = s, *p2 = t;
    while(*p1 && *p2){
        if(*p1 == *p2) p1++;
        p2++;
    }
    if(*p1 == '\0')return true;
    return false;
}