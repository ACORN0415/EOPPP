int test_func(void) {
    int v0 = 53;
    int v1 = 31;
    int v2 = 72;
    int v3 = 35;
    int v4 = 87;
    int v5 = 71;
    int v6 = 95;
    int i;
    v4 = v4 * 10;
    v1 = v1 - v3;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
