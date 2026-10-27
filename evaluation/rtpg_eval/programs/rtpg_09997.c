int test_func(void) {
    int v0 = 74;
    int v1 = 18;
    int v2 = 94;
    int v3 = 61;
    int i;
    v3 = v3 + v0;
    v2 = 42;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
