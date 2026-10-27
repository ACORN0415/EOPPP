int test_func(void) {
    int v0 = 63;
    int v1 = 50;
    int v2 = 30;
    int v3 = 45;
    int v4 = 38;
    int i;
    v0 = v0 - v2;
    v1 = v1 * 5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
