int test_func(void) {
    int v0 = 20;
    int v1 = 91;
    int v2 = 24;
    int v3 = 50;
    int v4 = 36;
    int v5 = 24;
    int v6 = 60;
    int i;
    if (v1 > v2) { v1 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
