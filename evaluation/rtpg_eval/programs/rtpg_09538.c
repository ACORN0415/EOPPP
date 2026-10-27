int test_func(void) {
    int v0 = 14;
    int v1 = 48;
    int v2 = 17;
    int v3 = 11;
    int i;
    v0 = v0 * 7;
    v2 = 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
