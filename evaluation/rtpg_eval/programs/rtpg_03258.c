int test_func(void) {
    int v0 = 1;
    int v1 = 47;
    int v2 = 53;
    int i;
    v2 = 57;
    v0 = v0 + v2;
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
