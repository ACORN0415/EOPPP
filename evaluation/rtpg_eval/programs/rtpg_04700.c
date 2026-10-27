int __arr_4700[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 24;
    int v2 = 35;
    int v3 = 79;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 * 9;
    for (i = 0; i < 10; i++) { __arr_4700[i] = v2 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
