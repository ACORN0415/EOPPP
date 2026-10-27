int test_func(void) {
    int v0 = 26;
    int v1 = 72;
    int v2 = 20;
    int v3 = 2;
    int i;
    if (v2 > v3) { v2 = v3; }
    v0 = v0 + v0;
    v0 = v0 - v2;
    v3 = v3 & v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
