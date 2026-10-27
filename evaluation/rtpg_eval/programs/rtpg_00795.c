int test_func(void) {
    int v0 = 3;
    int v1 = 24;
    int v2 = 88;
    int v3 = 93;
    int v4 = 55;
    int v5 = 7;
    int i;
    v5 = 86;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
