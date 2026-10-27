int test_func(void) {
    int v0 = 32;
    int v1 = 34;
    int v2 = 12;
    int v3 = 59;
    int v4 = 1;
    int v5 = 87;
    int i;
    if (v4 > v1) { v4 = v1; }
    v1 = v1 * 2;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
