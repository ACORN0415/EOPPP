int test_func(void) {
    int v0 = 68;
    int v1 = 82;
    int v2 = 9;
    int v3 = 33;
    int v4 = 91;
    int v5 = 27;
    int v6 = 20;
    int v7 = 26;
    int i;
    v6 = v6 - v3;
    v5 = 3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
