int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 87;
    int v2 = 19;
    int v3 = 75;
    int v4 = 19;
    int v5 = 3;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v5;
    }
    v2 = v2 - v3;
    v2 = 59;
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
