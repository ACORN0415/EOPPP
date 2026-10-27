int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 74;
    int v2 = 6;
    int v3 = 44;
    int v4 = 47;
    int v5 = 87;
    int v6 = 20;
    int i;
    v3 = v3 - v1;
    v4 = v4 + v5;
    v5 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
