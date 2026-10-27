int test_func(void) {
    int v0 = 20;
    int v1 = 91;
    int v2 = 99;
    int v3 = 100;
    int v4 = 67;
    int v5 = 31;
    int v6 = 26;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 + v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
