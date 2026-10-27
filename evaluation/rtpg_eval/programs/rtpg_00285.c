int test_func(void) {
    int v0 = 68;
    int v1 = 6;
    int v2 = 63;
    int i;
    v1 = 79;
    if (v2 > v1) { v2 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
