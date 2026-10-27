int test_func(void) {
    int v0 = 60;
    int v1 = 61;
    int v2 = 42;
    int v3 = 24;
    int v4 = 23;
    int v5 = 32;
    int v6 = 81;
    int v7 = 58;
    int i;
    for (i = 0; i < 18; i++) {
        v5 = v5 + v2;
    }
    if (v1 > v1) { v1 = v1; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v4 = v4 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
