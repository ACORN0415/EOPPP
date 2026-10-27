int test_func(void) {
    int v0 = 14;
    int v1 = 35;
    int v2 = 30;
    int v3 = 75;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    v1 = 13;
    v0 = v0 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
