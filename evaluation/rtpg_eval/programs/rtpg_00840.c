int test_func(void) {
    int v0 = 89;
    int v1 = 55;
    int v2 = 28;
    int v3 = 38;
    int v4 = 54;
    int v5 = 31;
    int v6 = 95;
    int i;
    v4 = v4 * 7;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v5;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
