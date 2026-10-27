int __arr_4113[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 93;
    int v2 = 13;
    int v3 = 24;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_4113[i] = v3 + i; }
    v2 = v2 + v1;
    v3 = v3 % (v4 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
