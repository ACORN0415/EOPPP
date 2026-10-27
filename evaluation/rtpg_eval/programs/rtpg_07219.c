int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 24;
    int v2 = 43;
    int v3 = 61;
    int v4 = 34;
    int v5 = 51;
    int v6 = 14;
    int i;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v3;
    }
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
