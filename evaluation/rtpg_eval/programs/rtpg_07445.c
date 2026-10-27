int test_func(void) {
    int v0 = 5;
    int v1 = 13;
    int v2 = 24;
    int v3 = 19;
    int v4 = 36;
    int v5 = 84;
    int v6 = 82;
    int i;
    if (v3 > v4) { v3 = v4; }
    v3 = v3 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
