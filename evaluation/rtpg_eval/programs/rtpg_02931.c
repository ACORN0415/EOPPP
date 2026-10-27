int test_func(void) {
    int v0 = 51;
    int v1 = 36;
    int v2 = 51;
    int i;
    if (v1 > v0) { v1 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
