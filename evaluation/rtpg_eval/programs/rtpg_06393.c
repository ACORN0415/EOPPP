int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 83;
    int v2 = 67;
    int v3 = 31;
    int v4 = 85;
    int v5 = 99;
    int v6 = 90;
    int i;
    v5 = v5 - v4;
    v0 = 61;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v0;
    *__p = *__p + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
