int test_func(void) {
    int v0 = 13;
    int v1 = 81;
    int v2 = 79;
    int v3 = 44;
    int v4 = 19;
    int i;
    if (v4 > v3) { v4 = v3; }
    v4 = v4 - v3;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
