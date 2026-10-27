int test_func(void) {
    int v0 = 65;
    int v1 = 68;
    int v2 = 86;
    int v3 = 28;
    int v4 = 64;
    int v5 = 65;
    int v6 = 87;
    int v7 = 4;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    v7 = v7 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
