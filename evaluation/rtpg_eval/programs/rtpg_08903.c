int test_func(void) {
    int v0 = 11;
    int v1 = 84;
    int v2 = 94;
    int v3 = 14;
    int v4 = 36;
    int i;
    v2 = 27;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    v2 = v2 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = v2 % (v3 + 1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
