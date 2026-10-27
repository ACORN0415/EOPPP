int test_func(void) {
    int v0 = 97;
    int v1 = 64;
    int v2 = 29;
    int v3 = 3;
    int i;
    v0 = v0 + v3;
    if (v3 > v2) { v3 = v2; }
    v1 = v1 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
