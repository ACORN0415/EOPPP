int __arr_8661[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 60;
    int v2 = 62;
    int v3 = 98;
    int v4 = 47;
    int i;
    v2 = 67;
    for (i = 0; i < 10; i++) { __arr_8661[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
