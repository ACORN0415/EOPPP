int test_func(void) {
    int v0 = 65;
    int v1 = 10;
    int v2 = 54;
    int v3 = 4;
    int i;
    if (v2 > v2) { v2 = v2; }
    v2 = v2 * 5;
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
