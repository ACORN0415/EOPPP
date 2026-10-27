int __arr_6380[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 94;
    int v2 = 25;
    int v3 = 90;
    int i;
    for (i = 0; i < 10; i++) { __arr_6380[i] = v3 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v1 = v1 % (v0 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
