int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 56;
    int v2 = 96;
    int v3 = 96;
    int v4 = 61;
    int v5 = 22;
    int v6 = 9;
    int i;
    if (v2 > v3) { v2 = v3; }
    v4 = v4 + v5;
    v6 = 53;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
