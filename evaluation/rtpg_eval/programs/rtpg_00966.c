int test_func(void) {
    int v0 = 2;
    int v1 = 1;
    int v2 = 1;
    int v3 = 54;
    int v4 = 24;
    int v5 = 21;
    int v6 = 28;
    int v7 = 32;
    int i;
    v7 = v7 * 3;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
