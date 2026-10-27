int test_func(void) {
    int v0 = 93;
    int v1 = 75;
    int v2 = 80;
    int v3 = 52;
    int v4 = 91;
    int v5 = 97;
    int v6 = 77;
    int v7 = 88;
    int i;
    v6 = v6 - v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
