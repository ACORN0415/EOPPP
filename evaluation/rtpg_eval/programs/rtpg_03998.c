int test_func(void) {
    int v0 = 84;
    int v1 = 75;
    int v2 = 29;
    int v3 = 84;
    int v4 = 27;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
