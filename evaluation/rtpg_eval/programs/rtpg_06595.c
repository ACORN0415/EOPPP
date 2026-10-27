int __arr_6595[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 6;
    int v2 = 5;
    int v3 = 38;
    int v4 = 79;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_6595[i] = v5 + i; }
    v3 = 73;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
