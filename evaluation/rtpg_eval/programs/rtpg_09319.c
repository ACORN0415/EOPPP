int test_func(void) {
    int v0 = 27;
    int v1 = 39;
    int v2 = 2;
    int v3 = 24;
    int i;
    v3 = v3 - v0;
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
