int test_func(void) {
    int v0 = 49;
    int v1 = 28;
    int v2 = 11;
    int v3 = 71;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
