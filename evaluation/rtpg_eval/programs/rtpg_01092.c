int test_func(void) {
    int v0 = 79;
    int v1 = 58;
    int v2 = 49;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
