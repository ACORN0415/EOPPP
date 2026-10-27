int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 9;
    int v2 = 64;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
