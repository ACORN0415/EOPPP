int test_func(void) {
    int v0 = 77;
    int v1 = 79;
    int v2 = 69;
    int v3 = 26;
    int i;
    v3 = v3 - v2;
    v2 = v2 * 9;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
