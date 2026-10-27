int test_func(void) {
    int v0 = 44;
    int v1 = 95;
    int v2 = 30;
    int i;
    v2 = 93;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
