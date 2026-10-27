int test_func(void) {
    int v0 = 39;
    int v1 = 34;
    int v2 = 84;
    int v3 = 56;
    int v4 = 54;
    int v5 = 25;
    int i;
    v2 = v2 * 5;
    v1 = 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
