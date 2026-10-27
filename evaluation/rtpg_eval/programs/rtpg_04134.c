int __arr_4134[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 12;
    int v2 = 7;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 10; i++) { __arr_4134[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
