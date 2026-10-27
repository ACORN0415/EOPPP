int test_func(void) {
    int v0 = 10;
    int v1 = 14;
    int v2 = 18;
    int i;
    v1 = 52;
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
