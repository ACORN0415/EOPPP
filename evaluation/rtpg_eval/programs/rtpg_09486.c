int test_func(void) {
    int v0 = 1;
    int v1 = 10;
    int v2 = 88;
    int v3 = 56;
    int v4 = 26;
    int v5 = 81;
    int v6 = 2;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    v3 = 29;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
