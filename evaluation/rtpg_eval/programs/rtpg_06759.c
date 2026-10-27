int test_func(void) {
    int v0 = 77;
    int v1 = 16;
    int v2 = 88;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 + v1;
    v1 = v1 * 3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
