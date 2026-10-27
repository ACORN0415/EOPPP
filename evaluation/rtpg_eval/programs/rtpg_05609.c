int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 82;
    int v2 = 9;
    int v3 = 77;
    int v4 = 51;
    int v5 = 77;
    int v6 = 17;
    int i;
    v2 = v2 + v3;
    v1 = v1 * 5;
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
