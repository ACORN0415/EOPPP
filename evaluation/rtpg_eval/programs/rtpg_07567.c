int __arr_7567[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 57;
    int v2 = 36;
    int v3 = 61;
    int v4 = 89;
    int v5 = 19;
    int v6 = 7;
    int i;
    v6 = v6 - v3;
    v5 = v5 * 7;
    for (i = 0; i < 10; i++) { __arr_7567[i] = v5 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
