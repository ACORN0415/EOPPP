int test_func(void) {
    int v0 = 7;
    int v1 = 4;
    int v2 = 39;
    int v3 = 80;
    int i;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 17; i++) {
        v2 = v2 + v1;
    }
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
