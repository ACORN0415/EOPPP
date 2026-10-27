int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 6;
    int v2 = 12;
    int v3 = 21;
    int v4 = 45;
    int v5 = 80;
    int i;
    v1 = v1 - v3;
    v1 = v1 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
