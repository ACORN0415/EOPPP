int test_func(void) {
    int v0 = 79;
    int v1 = 18;
    int v2 = 0;
    int v3 = 16;
    int v4 = 42;
    int v5 = 31;
    int v6 = 42;
    int v7 = 8;
    int i;
    for (i = 0; i < 14; i++) {
        v6 = v6 + v1;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
