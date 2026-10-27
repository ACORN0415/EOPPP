int __arr_5212[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 50;
    int v2 = 43;
    int v3 = 62;
    int v4 = 97;
    int v5 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_5212[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
