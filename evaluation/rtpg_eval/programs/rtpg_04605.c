int __arr_4605[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 13;
    int v2 = 19;
    int v3 = 76;
    int v4 = 45;
    int v5 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_4605[i] = v3 + i; }
    v1 = v1 + v5;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
