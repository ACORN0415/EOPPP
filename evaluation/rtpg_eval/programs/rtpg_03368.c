int test_func(void) {
    int v0 = 19;
    int v1 = 55;
    int v2 = 16;
    int v3 = 15;
    int v4 = 40;
    int v5 = 95;
    int i;
    v4 = v4 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
