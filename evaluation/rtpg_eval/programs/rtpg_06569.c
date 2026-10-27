int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 96;
    int v2 = 26;
    int v3 = 15;
    int v4 = 95;
    int i;
    v2 = v2 + v1;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
