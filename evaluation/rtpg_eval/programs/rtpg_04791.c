int test_func(void) {
    int v0 = 41;
    int v1 = 42;
    int v2 = 10;
    int v3 = 4;
    int v4 = 91;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v4;
    }
    v0 = v0 * 10;
    v1 = v1 / (v2 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
