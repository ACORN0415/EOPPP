int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 0;
    int v2 = 91;
    int v3 = 49;
    int v4 = 35;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
