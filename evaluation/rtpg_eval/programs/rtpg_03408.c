int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 42;
    int v2 = 11;
    int v3 = 77;
    int v4 = 32;
    int i;
    v2 = v2 - v4;
    v1 = v1 % (v4 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
