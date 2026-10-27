int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 48;
    int v2 = 58;
    int v3 = 97;
    int v4 = 48;
    int v5 = 26;
    int v6 = 47;
    int i;
    v5 = v5 * 9;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 + v6;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
