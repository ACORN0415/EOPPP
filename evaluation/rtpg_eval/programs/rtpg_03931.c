int __arr_3931[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 72;
    int v2 = 38;
    int v3 = 1;
    int v4 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_3931[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
