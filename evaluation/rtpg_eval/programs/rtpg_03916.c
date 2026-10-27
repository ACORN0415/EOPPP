int test_func(void) {
    int v0 = 11;
    int v1 = 86;
    int v2 = 18;
    int v3 = 40;
    int v4 = 0;
    int v5 = 30;
    int v6 = 49;
    int i;
    v5 = v5 - v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = v5 ^ v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
