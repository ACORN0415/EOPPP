int __arr_8530[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 18;
    int v2 = 53;
    int v3 = 80;
    int v4 = 35;
    int v5 = 26;
    int v6 = 44;
    int v7 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_8530[i] = v1 + i; }
    v1 = 70;
    if (v4 > v5) { v4 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
