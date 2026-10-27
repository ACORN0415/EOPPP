int __arr_6381[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 44;
    int v2 = 10;
    int v3 = 38;
    int v4 = 36;
    int v5 = 25;
    int i;
    v3 = v3 - v5;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_6381[i] = v4 + i; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
