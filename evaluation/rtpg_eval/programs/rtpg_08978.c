int test_func(void) {
    int v0 = 37;
    int v1 = 89;
    int v2 = 91;
    int v3 = 62;
    int i;
    v1 = v1 - v2;
    if (v0 > v1) { v0 = v1; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
