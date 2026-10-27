int __arr_1994[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 37;
    int v2 = 26;
    int v3 = 39;
    int v4 = 38;
    int i;
    v2 = 82;
    for (i = 0; i < 10; i++) { __arr_1994[i] = v2 + i; }
    for (i = 0; i < 17; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
