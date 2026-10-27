int __arr_2549[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 21;
    int v2 = 77;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_2549[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
