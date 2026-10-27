int __arr_1705[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 13;
    int v2 = 38;
    int v3 = 55;
    int v4 = 93;
    int v5 = 24;
    int i;
    v1 = v1 * 5;
    for (i = 0; i < 10; i++) { __arr_1705[i] = v1 + i; }
    if (v4 > v1) { v4 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    v0 = v0 & v3;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
