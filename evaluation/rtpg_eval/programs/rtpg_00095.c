int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 99;
    int v2 = 65;
    int v3 = 71;
    int i;
    if (v3 > v2) { v3 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
