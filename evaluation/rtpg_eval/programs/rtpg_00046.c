int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 10;
    int v2 = 83;
    int v3 = 79;
    int v4 = 93;
    int v5 = 10;
    int i;
    v2 = v2 * 9;
    v2 = v2 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
