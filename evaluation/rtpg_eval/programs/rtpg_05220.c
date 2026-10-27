int test_func(void) {
    int v0 = 41;
    int v1 = 20;
    int v2 = 98;
    int v3 = 80;
    int v4 = 32;
    int v5 = 47;
    int v6 = 6;
    int v7 = 49;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
