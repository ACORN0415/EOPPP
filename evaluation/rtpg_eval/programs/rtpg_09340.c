int test_func(void) {
    int v0 = 78;
    int v1 = 97;
    int v2 = 36;
    int v3 = 34;
    int i;
    if (v3 > v3) { v3 = v3; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
