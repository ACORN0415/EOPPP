int test_func(void) {
    int v0 = 22;
    int v1 = 8;
    int v2 = 38;
    int v3 = 70;
    int v4 = 36;
    int v5 = 77;
    int i;
    v0 = v0 - v4;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v0;
    }
    v3 = 72;
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
