int test_func(void) {
    int v0 = 17;
    int v1 = 40;
    int v2 = 43;
    int v3 = 8;
    int v4 = 49;
    int v5 = 57;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v5;
    }
    if (v0 > v5) { v0 = v5; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
