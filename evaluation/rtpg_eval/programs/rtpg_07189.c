int test_func(void) {
    int v0 = 45;
    int v1 = 81;
    int v2 = 73;
    int v3 = 12;
    int v4 = 89;
    int v5 = 35;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v4;
    }
    if (v4 > v0) { v4 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = v0 & v3;
    return v0;
}
int main(void) { return test_func(); }
