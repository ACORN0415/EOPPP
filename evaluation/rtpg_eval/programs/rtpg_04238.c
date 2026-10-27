int __arr_4238[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 87;
    int v2 = 42;
    int v3 = 73;
    int i;
    v1 = 80;
    for (i = 0; i < 10; i++) { __arr_4238[i] = v1 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
