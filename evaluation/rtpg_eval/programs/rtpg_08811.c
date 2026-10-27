int __arr_8811[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 10;
    int v2 = 29;
    int v3 = 55;
    int v4 = 73;
    int v5 = 48;
    int v6 = 86;
    int i;
    v4 = 91;
    for (i = 0; i < 10; i++) { __arr_8811[i] = v0 + i; }
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
