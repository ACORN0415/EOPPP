int test_func(void) {
    int v0 = 48;
    int v1 = 14;
    int v2 = 11;
    int v3 = 0;
    int v4 = 23;
    int v5 = 63;
    int v6 = 64;
    int v7 = 44;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
