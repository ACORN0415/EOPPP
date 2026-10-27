int test_func(void) {
    int v0 = 14;
    int v1 = 91;
    int v2 = 44;
    int v3 = 1;
    int v4 = 51;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
