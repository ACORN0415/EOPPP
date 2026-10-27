int test_func(void) {
    int v0 = 87;
    int v1 = 5;
    int v2 = 32;
    int v3 = 22;
    int v4 = 19;
    int v5 = 65;
    int v6 = 24;
    int v7 = 97;
    int i;
    v0 = v0 + v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
