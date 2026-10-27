int test_func(void) {
    int v0 = 20;
    int v1 = 40;
    int v2 = 3;
    int v3 = 29;
    int v4 = 96;
    int i;
    v4 = v4 - v3;
    v2 = v2 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
