int test_func(void) {
    int v0 = 79;
    int v1 = 0;
    int v2 = 39;
    int v3 = 67;
    int v4 = 38;
    int i;
    v2 = v2 + v4;
    v4 = 12;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
