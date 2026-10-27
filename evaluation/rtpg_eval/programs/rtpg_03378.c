int test_func(void) {
    int v0 = 83;
    int v1 = 22;
    int v2 = 65;
    int v3 = 50;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = v0 * 3;
    v2 = v2 ^ v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
