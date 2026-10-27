int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 17;
    int v2 = 80;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
