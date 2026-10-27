int __arr_2598[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 22;
    int v2 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_2598[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
