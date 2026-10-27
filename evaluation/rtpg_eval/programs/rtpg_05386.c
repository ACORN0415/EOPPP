int test_func(void) {
    int v0 = 50;
    int v1 = 49;
    int v2 = 45;
    int v3 = 3;
    int v4 = 40;
    int v5 = 6;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v5;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
