int __arr_1537[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 10;
    int v2 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_1537[i] = v1 + i; }
    v0 = v0 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
