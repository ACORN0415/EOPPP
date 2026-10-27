int __arr_6587[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 22;
    int v2 = 9;
    int v3 = 9;
    int v4 = 59;
    int v5 = 7;
    int i;
    if (v4 > v5) { v4 = v5; }
    v4 = v4 * 6;
    for (i = 0; i < 10; i++) { __arr_6587[i] = v5 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v4 = v4 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
