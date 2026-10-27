int __arr_5955[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 7;
    int v2 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_5955[i] = v1 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
