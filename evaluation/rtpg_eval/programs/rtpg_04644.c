int test_func(void) {
    int v0 = 18;
    int v1 = 97;
    int v2 = 81;
    int v3 = 56;
    int v4 = 29;
    int v5 = 100;
    int i;
    v3 = v3 - v1;
    v1 = v1 + v1;
    v4 = v4 ^ v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
