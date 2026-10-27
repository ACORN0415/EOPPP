int test_func(void) {
    int v0 = 100;
    int v1 = 3;
    int v2 = 89;
    int v3 = 77;
    int v4 = 24;
    int v5 = 73;
    int v6 = 42;
    int v7 = 94;
    int i;
    for (i = 0; i < 5; i++) {
        v7 = v7 + v6;
    }
    if (v4 > v0) { v4 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
