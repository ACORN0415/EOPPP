int __arr_7784[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 7;
    int v2 = 72;
    int v3 = 12;
    int v4 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_7784[i] = v3 + i; }
    v4 = v4 * 10;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
