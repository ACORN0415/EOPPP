int test_func(void) {
    int v0 = 31;
    int v1 = 5;
    int v2 = 56;
    int v3 = 37;
    int i;
    if (v0 > v0) { v0 = v0; }
    v0 = v0 - v1;
    v0 = v0 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
