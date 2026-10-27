int __arr_1320[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 62;
    int v2 = 43;
    int v3 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_1320[i] = v2 + i; }
    v2 = 75;
    v3 = v3 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
