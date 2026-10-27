int test_func(void) {
    int v0 = 22;
    int v1 = 26;
    int v2 = 36;
    int v3 = 12;
    int v4 = 79;
    int v5 = 30;
    int i;
    v0 = v0 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
