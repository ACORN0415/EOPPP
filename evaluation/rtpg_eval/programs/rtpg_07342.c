int test_func(void) {
    int v0 = 83;
    int v1 = 31;
    int v2 = 72;
    int i;
    v2 = 75;
    v1 = v1 % (v2 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
