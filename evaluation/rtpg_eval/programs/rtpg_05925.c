int test_func(void) {
    int v0 = 50;
    int v1 = 77;
    int v2 = 53;
    int v3 = 21;
    int i;
    v1 = 84;
    if (v1 > v3) { v1 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
