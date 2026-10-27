int test_func(void) {
    int v0 = 14;
    int v1 = 9;
    int v2 = 55;
    int v3 = 11;
    int v4 = 89;
    int v5 = 53;
    int i;
    if (v2 > v2) { v2 = v2; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
