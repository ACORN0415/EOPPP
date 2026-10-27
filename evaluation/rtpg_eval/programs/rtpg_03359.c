int test_func(void) {
    int v0 = 68;
    int v1 = 44;
    int v2 = 54;
    int v3 = 48;
    int v4 = 80;
    int v5 = 53;
    int v6 = 42;
    int i;
    v3 = 82;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
