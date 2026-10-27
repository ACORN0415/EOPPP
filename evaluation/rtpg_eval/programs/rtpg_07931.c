int test_func(void) {
    int v0 = 10;
    int v1 = 13;
    int v2 = 74;
    int v3 = 53;
    int v4 = 77;
    int i;
    v4 = 0;
    v1 = v1 + v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
