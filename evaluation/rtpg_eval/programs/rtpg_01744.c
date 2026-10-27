int test_func(void) {
    int v0 = 43;
    int v1 = 85;
    int v2 = 76;
    int v3 = 85;
    int v4 = 90;
    int v5 = 1;
    int v6 = 9;
    int v7 = 9;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    v3 = v3 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
