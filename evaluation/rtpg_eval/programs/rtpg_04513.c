int test_func(void) {
    int v0 = 53;
    int v1 = 42;
    int v2 = 30;
    int v3 = 24;
    int v4 = 93;
    int v5 = 98;
    int v6 = 32;
    int i;
    v0 = v0 - v6;
    v0 = v0 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
