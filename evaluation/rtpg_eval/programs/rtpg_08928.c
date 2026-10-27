int __arr_8928[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 44;
    int v2 = 23;
    int v3 = 21;
    int v4 = 95;
    int v5 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_8928[i] = v4 + i; }
    v0 = 39;
    v2 = v2 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
