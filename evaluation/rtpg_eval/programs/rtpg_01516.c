int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 54;
    int v2 = 78;
    int v3 = 92;
    int v4 = 62;
    int v5 = 21;
    int i;
    v4 = 45;
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
