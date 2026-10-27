int test_func(void) {
    int v0 = 72;
    int v1 = 83;
    int v2 = 41;
    int v3 = 26;
    int v4 = 41;
    int v5 = 94;
    int v6 = 40;
    int i;
    v0 = v0 + v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v3 = v3 & v5;
    return v0;
}
int main(void) { return test_func(); }
