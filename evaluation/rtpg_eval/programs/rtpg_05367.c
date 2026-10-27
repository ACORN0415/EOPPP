int test_func(void) {
    int v0 = 0;
    int v1 = 50;
    int v2 = 66;
    int v3 = 15;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
