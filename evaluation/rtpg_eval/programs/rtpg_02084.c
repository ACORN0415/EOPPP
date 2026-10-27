int test_func(void) {
    int v0 = 5;
    int v1 = 53;
    int v2 = 100;
    int v3 = 78;
    int v4 = 50;
    int v5 = 72;
    int v6 = 56;
    int i;
    v1 = 47;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v2;
    }
    v0 = v0 * 2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
