int test_func(void) {
    int v0 = 91;
    int v1 = 92;
    int v2 = 11;
    int v3 = 24;
    int i;
    v0 = 88;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
