int test_func(void) {
    int v0 = 77;
    int v1 = 89;
    int v2 = 53;
    int i;
    v1 = 22;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
