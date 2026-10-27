int __arr_6501[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 29;
    int v2 = 88;
    int v3 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_6501[i] = v3 + i; }
    v3 = v3 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
