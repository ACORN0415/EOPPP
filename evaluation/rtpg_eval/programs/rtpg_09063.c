int test_func(void) {
    int v0 = 88;
    int v1 = 36;
    int v2 = 59;
    int v3 = 81;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 % (v3 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
