int test_func(void) {
    int v0 = 1;
    int v1 = 67;
    int v2 = 76;
    int i;
    if (v0 > v2) { v0 = v2; }
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
