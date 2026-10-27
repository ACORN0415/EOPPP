int __arr_7241[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 17;
    int v2 = 59;
    int v3 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_7241[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
