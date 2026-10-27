int test_func(void) {
    int v0 = 77;
    int v1 = 25;
    int v2 = 15;
    int v3 = 53;
    int v4 = 35;
    int v5 = 100;
    int v6 = 47;
    int i;
    v4 = v4 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
