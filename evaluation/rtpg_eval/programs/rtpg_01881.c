int test_func(void) {
    int v0 = 76;
    int v1 = 65;
    int v2 = 30;
    int v3 = 64;
    int v4 = 12;
    int v5 = 70;
    int v6 = 76;
    int v7 = 4;
    int i;
    v5 = 20;
    v5 = v5 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v4 = v4 & v0;
    return v0;
}
int main(void) { return test_func(); }
