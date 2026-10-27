int test_func(void) {
    int v0 = 49;
    int v1 = 54;
    int v2 = 37;
    int v3 = 15;
    int v4 = 10;
    int v5 = 12;
    int v6 = 37;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    v6 = v6 - v4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
