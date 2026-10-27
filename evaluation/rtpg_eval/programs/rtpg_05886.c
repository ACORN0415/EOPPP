int __arr_5886[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 61;
    int v2 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_5886[i] = v2 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
