int test_func(void) {
    int v0 = 82;
    int v1 = 50;
    int v2 = 98;
    int v3 = 50;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
