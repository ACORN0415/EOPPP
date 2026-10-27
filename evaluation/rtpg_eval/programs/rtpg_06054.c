int test_func(void) {
    int v0 = 94;
    int v1 = 44;
    int v2 = 2;
    int v3 = 24;
    int v4 = 17;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    v1 = v1 + v0;
    v1 = v1 & v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
