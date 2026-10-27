int test_func(void) {
    int v0 = 76;
    int v1 = 76;
    int v2 = 76;
    int v3 = 38;
    int v4 = 45;
    int v5 = 64;
    int v6 = 47;
    int v7 = 54;
    int i;
    v7 = v7 + v5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
