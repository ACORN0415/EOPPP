int test_func(void) {
    int v0 = 84;
    int v1 = 67;
    int v2 = 52;
    int v3 = 77;
    int v4 = 59;
    int v5 = 67;
    int i;
    if (v2 > v5) { v2 = v5; }
    v1 = v1 + v4;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
