int test_func(void) {
    int v0 = 71;
    int v1 = 91;
    int v2 = 19;
    int v3 = 83;
    int v4 = 2;
    int v5 = 11;
    int v6 = 46;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v0;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
