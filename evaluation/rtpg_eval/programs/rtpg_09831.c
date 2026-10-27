int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 77;
    int v2 = 61;
    int v3 = 35;
    int v4 = 41;
    int v5 = 44;
    int v6 = 90;
    int v7 = 92;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v3;
    }
    v7 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
