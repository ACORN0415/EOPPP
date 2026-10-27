int test_func(void) {
    int v0 = 11;
    int v1 = 63;
    int v2 = 50;
    int v3 = 12;
    int v4 = 16;
    int v5 = 42;
    int v6 = 43;
    int v7 = 8;
    int i;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v3 = v3 / (v7 + 1);
    return v0;
}
int main(void) { return test_func(); }
