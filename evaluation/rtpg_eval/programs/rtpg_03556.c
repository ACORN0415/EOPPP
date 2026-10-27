int test_func(void) {
    int v0 = 87;
    int v1 = 36;
    int v2 = 22;
    int v3 = 84;
    int v4 = 42;
    int v5 = 19;
    int v6 = 71;
    int i;
    v5 = 82;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
