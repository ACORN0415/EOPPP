int test_func(void) {
    int v0 = 26;
    int v1 = 82;
    int v2 = 27;
    int v3 = 67;
    int v4 = 12;
    int v5 = 13;
    int v6 = 0;
    int v7 = 10;
    int i;
    v4 = v4 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 & v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
