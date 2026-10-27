int test_func(void) {
    int v0 = 76;
    int v1 = 16;
    int v2 = 26;
    int v3 = 44;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 % (v3 + 1);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
