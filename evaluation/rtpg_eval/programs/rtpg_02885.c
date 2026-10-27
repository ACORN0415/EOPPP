int test_func(void) {
    int v0 = 17;
    int v1 = 60;
    int v2 = 18;
    int v3 = 97;
    int v4 = 74;
    int i;
    v0 = v0 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
