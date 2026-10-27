int test_func(void) {
    int v0 = 71;
    int v1 = 73;
    int v2 = 25;
    int v3 = 92;
    int v4 = 7;
    int v5 = 90;
    int v6 = 24;
    int i;
    v4 = v4 + v2;
    v0 = v0 - v2;
    v0 = 78;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
