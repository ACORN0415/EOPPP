int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 35;
    int v2 = 36;
    int i;
    v0 = 31;
    v1 = v1 - v0;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
