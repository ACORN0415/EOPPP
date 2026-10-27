int __arr_4735[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 61;
    int v2 = 95;
    int v3 = 59;
    int v4 = 35;
    int v5 = 63;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_4735[i] = v1 + i; }
    v3 = v3 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
