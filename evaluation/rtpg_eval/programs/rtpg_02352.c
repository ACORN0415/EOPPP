int test_func(void) {
    int v0 = 22;
    int v1 = 21;
    int v2 = 56;
    int v3 = 52;
    int i;
    v2 = v2 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
