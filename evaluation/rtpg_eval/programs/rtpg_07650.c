int test_func(void) {
    int v0 = 76;
    int v1 = 82;
    int v2 = 82;
    int v3 = 60;
    int v4 = 72;
    int i;
    v1 = v1 + v1;
    v4 = v4 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
