int test_func(void) {
    int v0 = 14;
    int v1 = 71;
    int v2 = 92;
    int v3 = 46;
    int v4 = 83;
    int v5 = 37;
    int v6 = 52;
    int i;
    v0 = 20;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = v2 % (v0 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
