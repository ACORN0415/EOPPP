int __arr_5393[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 79;
    int v2 = 2;
    int v3 = 15;
    int v4 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_5393[i] = v2 + i; }
    for (i = 0; i < 20; i++) {
        v1 = v1 + v4;
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
