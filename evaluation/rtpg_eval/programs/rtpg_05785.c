int test_func(void) {
    int v0 = 31;
    int v1 = 28;
    int v2 = 54;
    int v3 = 61;
    int v4 = 55;
    int v5 = 92;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v5;
    }
    v5 = 50;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
