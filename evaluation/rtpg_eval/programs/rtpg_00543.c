int test_func(void) {
    int v0 = 36;
    int v1 = 4;
    int v2 = 38;
    int v3 = 51;
    int v4 = 32;
    int v5 = 62;
    int v6 = 60;
    int v7 = 33;
    int i;
    for (i = 0; i < 11; i++) {
        v6 = v6 + v3;
    }
    if (v2 > v3) { v2 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
