int __arr_486[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 2;
    int v2 = 36;
    int v3 = 66;
    int v4 = 20;
    int v5 = 42;
    int v6 = 40;
    int v7 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_486[i] = v4 + i; }
    v2 = 51;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
