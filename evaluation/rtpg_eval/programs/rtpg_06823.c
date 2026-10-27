int test_func(void) {
    int v0 = 96;
    int v1 = 56;
    int v2 = 78;
    int v3 = 91;
    int v4 = 100;
    int v5 = 33;
    int v6 = 26;
    int v7 = 95;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 11; i++) {
        v6 = v6 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
