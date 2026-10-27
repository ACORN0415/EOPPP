int test_func(void) {
    int v0 = 17;
    int v1 = 14;
    int v2 = 34;
    int v3 = 24;
    int v4 = 8;
    int v5 = 31;
    int i;
    v5 = v5 + v5;
    v2 = v2 - v0;
    v2 = v2 & v5;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
