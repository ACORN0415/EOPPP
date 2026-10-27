int test_func(void) {
    int v0 = 44;
    int v1 = 57;
    int v2 = 91;
    int v3 = 86;
    int v4 = 93;
    int v5 = 72;
    int v6 = 38;
    int v7 = 77;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
