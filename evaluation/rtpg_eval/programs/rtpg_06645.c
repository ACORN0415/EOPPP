int test_func(void) {
    int v0 = 53;
    int v1 = 29;
    int v2 = 33;
    int v3 = 84;
    int v4 = 86;
    int v5 = 89;
    int v6 = 71;
    int v7 = 19;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v7;
    }
    v7 = v7 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
