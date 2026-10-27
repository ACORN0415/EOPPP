int test_func(void) {
    int v0 = 44;
    int v1 = 5;
    int v2 = 16;
    int v3 = 36;
    int v4 = 91;
    int v5 = 29;
    int v6 = 82;
    int v7 = 44;
    int i;
    v6 = v6 * 8;
    v2 = 38;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
