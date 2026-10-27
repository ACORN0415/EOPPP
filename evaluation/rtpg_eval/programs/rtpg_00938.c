int test_func(void) {
    int v0 = 64;
    int v1 = 1;
    int v2 = 18;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
