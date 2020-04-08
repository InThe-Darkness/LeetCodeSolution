int myAtoi(char* str) {
    char* p = str;
    while (*p == ' ') p++;
    if ((*p < '0' || *p > '9') && *p != '-' && *p != '+') return 0;
    int ans = 0, tag = *p == '-' ? -1 : 1;
    if (tag == -1) {
        p++;
        while (isdigit(*p)) {
            if (INT_MIN / 10 > ans) return INT_MIN;
            else if (INT_MIN / 10 == ans) {
                if (*p - '0' > 7)
                    return INT_MIN;
            }
            ans = ans * 10 - (*p++ - '0');
        }
    }
    else {
        if(*p == '+') p++;
        while (isdigit(*p)) {
            if (INT_MAX / 10 < ans) return INT_MAX;
            else if (INT_MAX / 10 == ans) {
                if (*p - '0' > 7)
                    return INT_MAX;
            }
            ans = ans * 10 + (*p++ - '0');
        }
    }
    return ans;
}