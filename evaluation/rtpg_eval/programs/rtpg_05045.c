int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 89;
    int v2 = 54;
    int v3 = 6;
    int v4 = 89;
    int v5 = 3;
    int v6 = 82;
    int i;
    v1 = v1 * 8;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
