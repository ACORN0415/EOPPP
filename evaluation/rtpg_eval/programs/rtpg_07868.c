int test_func(void) {
    int v0 = 24;
    int v1 = 71;
    int v2 = 47;
    int v3 = 96;
    int v4 = 96;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
