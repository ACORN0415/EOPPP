int test_func(void) {
    int v0 = 96;
    int v1 = 73;
    int v2 = 53;
    int v3 = 79;
    int v4 = 85;
    int v5 = 52;
    int i;
    if (v2 > v0) { v2 = v0; }
    v4 = 12;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
