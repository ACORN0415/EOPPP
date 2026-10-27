int test_func(void) {
    int v0 = 19;
    int v1 = 28;
    int v2 = 89;
    int v3 = 42;
    int v4 = 3;
    int v5 = 81;
    int v6 = 36;
    int v7 = 50;
    int i;
    v1 = v1 + v2;
    v1 = v1 * 5;
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
