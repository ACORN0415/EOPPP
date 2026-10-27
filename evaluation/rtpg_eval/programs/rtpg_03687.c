int test_func(void) {
    int v0 = 78;
    int v1 = 54;
    int v2 = 44;
    int v3 = 37;
    int v4 = 33;
    int v5 = 66;
    int v6 = 38;
    int v7 = 8;
    int i;
    v2 = 59;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v3;
    }
    if (v1 > v5) { v1 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
