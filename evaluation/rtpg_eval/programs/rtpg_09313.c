int test_func(void) {
    int v0 = 69;
    int v1 = 95;
    int v2 = 71;
    int v3 = 21;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
