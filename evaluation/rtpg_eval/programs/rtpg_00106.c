int test_func(void) {
    int v0 = 31;
    int v1 = 33;
    int v2 = 99;
    int v3 = 19;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v2;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
