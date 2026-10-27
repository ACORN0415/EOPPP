int __arr_6602[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 19;
    int v2 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_6602[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
