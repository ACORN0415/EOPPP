int test_func(void) {
    int v0 = 55;
    int v1 = 68;
    int v2 = 33;
    int v3 = 98;
    int v4 = 11;
    int v5 = 91;
    int v6 = 71;
    int v7 = 11;
    int i;
    v1 = v1 * 6;
    v4 = v4 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
