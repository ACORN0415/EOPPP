int test_func(void) {
    int v0 = 91;
    int v1 = 32;
    int v2 = 46;
    int v3 = 27;
    int v4 = 72;
    int v5 = 67;
    int v6 = 64;
    int v7 = 7;
    int i;
    v0 = 21;
    v7 = v7 + v1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
