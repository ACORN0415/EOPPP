int test_func(void) {
    int v0 = 84;
    int v1 = 50;
    int v2 = 4;
    int i;
    v0 = v0 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
