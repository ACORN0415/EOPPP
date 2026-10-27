int test_func(void) {
    int v0 = 25;
    int v1 = 51;
    int v2 = 45;
    int v3 = 45;
    int v4 = 73;
    int v5 = 75;
    int v6 = 91;
    int i;
    v2 = v2 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v2 = v2 & v5;
    return v0;
}
int main(void) { return test_func(); }
