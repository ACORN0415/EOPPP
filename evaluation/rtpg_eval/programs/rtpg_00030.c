int __arr_30[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 53;
    int v2 = 57;
    int v3 = 43;
    int v4 = 24;
    int v5 = 5;
    int v6 = 45;
    int v7 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_30[i] = v6 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
