int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 79;
    int v2 = 8;
    int v3 = 89;
    int v4 = 68;
    int v5 = 47;
    int v6 = 42;
    int v7 = 15;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
