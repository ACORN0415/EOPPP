int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 83;
    int v2 = 63;
    int v3 = 77;
    int v4 = 74;
    int v5 = 57;
    int v6 = 80;
    int v7 = 13;
    int i;
    v6 = 2;
    v3 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
