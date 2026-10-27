int test_func(void) {
    int v0 = 23;
    int v1 = 42;
    int v2 = 16;
    int v3 = 44;
    int v4 = 6;
    int v5 = 72;
    int v6 = 35;
    int v7 = 0;
    int i;
    v5 = v5 + v7;
    if (v7 > v2) { v7 = v2; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
