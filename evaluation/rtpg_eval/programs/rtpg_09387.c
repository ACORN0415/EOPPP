int test_func(void) {
    int v0 = 78;
    int v1 = 12;
    int v2 = 13;
    int v3 = 66;
    int v4 = 22;
    int v5 = 22;
    int i;
    if (v5 > v2) { v5 = v2; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
