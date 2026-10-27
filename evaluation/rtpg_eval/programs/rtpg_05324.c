int __arr_5324[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 80;
    int v2 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_5324[i] = v0 + i; }
    v2 = v2 * 7;
    v2 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
