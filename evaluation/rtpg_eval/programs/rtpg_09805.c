int test_func(void) {
    int v0 = 34;
    int v1 = 41;
    int v2 = 91;
    int v3 = 77;
    int v4 = 16;
    int v5 = 40;
    int v6 = 87;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
