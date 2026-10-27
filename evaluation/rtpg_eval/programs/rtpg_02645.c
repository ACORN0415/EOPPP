int test_func(void) {
    int v0 = 95;
    int v1 = 21;
    int v2 = 98;
    int v3 = 86;
    int v4 = 90;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
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
