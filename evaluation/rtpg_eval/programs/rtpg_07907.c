int __arr_7907[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 36;
    int v2 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_7907[i] = v1 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
