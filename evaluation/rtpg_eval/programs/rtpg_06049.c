int test_func(void) {
    int v0 = 47;
    int v1 = 2;
    int v2 = 96;
    int v3 = 11;
    int v4 = 2;
    int v5 = 6;
    int v6 = 12;
    int v7 = 45;
    int i;
    v3 = v3 + v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
