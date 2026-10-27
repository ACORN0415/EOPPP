int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 62;
    int v2 = 46;
    int v3 = 30;
    int v4 = 70;
    int v5 = 45;
    int v6 = 56;
    int v7 = 12;
    int i;
    if (v4 > v1) { v4 = v1; }
    for (i = 0; i < 12; i++) {
        v1 = v1 + v6;
    }
    v4 = 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
