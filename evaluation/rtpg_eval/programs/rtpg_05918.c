int test_func(void) {
    int v0 = 6;
    int v1 = 38;
    int v2 = 27;
    int v3 = 8;
    int i;
    v1 = v1 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
