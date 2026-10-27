int test_func(void) {
    int v0 = 91;
    int v1 = 68;
    int v2 = 42;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
