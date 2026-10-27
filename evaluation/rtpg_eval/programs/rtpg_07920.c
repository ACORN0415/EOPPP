int test_func(void) {
    int v0 = 25;
    int v1 = 4;
    int v2 = 20;
    int v3 = 39;
    int v4 = 75;
    int v5 = 0;
    int i;
    v3 = v3 - v2;
    v0 = v0 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
