int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 59;
    int v2 = 56;
    int v3 = 16;
    int v4 = 34;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v3;
    }
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
