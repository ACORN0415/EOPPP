int test_func(void) {
    int v0 = 95;
    int v1 = 32;
    int v2 = 75;
    int v3 = 82;
    int v4 = 80;
    int v5 = 27;
    int v6 = 8;
    int v7 = 97;
    int i;
    v6 = v6 - v5;
    v5 = v5 * 3;
    v5 = v5 | v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
