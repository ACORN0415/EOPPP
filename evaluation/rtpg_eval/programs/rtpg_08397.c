int test_func(void) {
    int v0 = 50;
    int v1 = 52;
    int v2 = 42;
    int v3 = 27;
    int v4 = 17;
    int v5 = 77;
    int i;
    if (v4 > v3) { v4 = v3; }
    v5 = v5 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
