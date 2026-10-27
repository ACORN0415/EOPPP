int test_func(void) {
    int v0 = 94;
    int v1 = 83;
    int v2 = 20;
    int v3 = 72;
    int v4 = 38;
    int v5 = 28;
    int v6 = 5;
    int i;
    v2 = v2 - v5;
    if (v0 > v2) { v0 = v2; }
    v4 = v4 + v6;
    v6 = v6 / (v0 + 1);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
