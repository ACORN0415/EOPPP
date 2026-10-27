int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 75;
    int v2 = 88;
    int v3 = 81;
    int v4 = 35;
    int v5 = 59;
    int i;
    v4 = v4 + v1;
    v0 = 62;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
