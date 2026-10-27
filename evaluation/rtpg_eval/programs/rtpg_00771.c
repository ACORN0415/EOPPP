int test_func(void) {
    int v0 = 60;
    int v1 = 44;
    int v2 = 60;
    int v3 = 32;
    int i;
    v3 = 82;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
