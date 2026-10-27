int test_func(void) {
    int v0 = 17;
    int v1 = 92;
    int v2 = 99;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
