int test_func(void) {
    int v0 = 46;
    int v1 = 70;
    int v2 = 43;
    int v3 = 85;
    int v4 = 22;
    int v5 = 14;
    int i;
    v4 = v4 * 10;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
