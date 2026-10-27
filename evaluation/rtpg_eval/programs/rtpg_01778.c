int test_func(void) {
    int v0 = 64;
    int v1 = 38;
    int v2 = 100;
    int v3 = 63;
    int v4 = 38;
    int i;
    v2 = 48;
    v2 = v2 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
