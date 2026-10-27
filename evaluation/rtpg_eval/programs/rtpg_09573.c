int test_func(void) {
    int v0 = 31;
    int v1 = 61;
    int v2 = 64;
    int v3 = 22;
    int v4 = 94;
    int v5 = 53;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
