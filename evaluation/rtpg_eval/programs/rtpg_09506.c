int test_func(void) {
    int v0 = 3;
    int v1 = 29;
    int v2 = 43;
    int i;
    v2 = v2 * 9;
    v2 = 83;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
