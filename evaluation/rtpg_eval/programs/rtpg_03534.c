int test_func(void) {
    int v0 = 70;
    int v1 = 33;
    int v2 = 1;
    int v3 = 92;
    int v4 = 20;
    int v5 = 78;
    int v6 = 72;
    int v7 = 94;
    int i;
    v4 = v4 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
