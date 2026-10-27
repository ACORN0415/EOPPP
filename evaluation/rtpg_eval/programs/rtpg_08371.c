int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 82;
    int v2 = 73;
    int v3 = 68;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
