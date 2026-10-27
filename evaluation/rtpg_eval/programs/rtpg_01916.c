int __arr_1916[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 49;
    int v2 = 20;
    int v3 = 71;
    int v4 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_1916[i] = v0 + i; }
    v3 = v3 * 2;
    if (v2 > v3) { v2 = v3; }
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
