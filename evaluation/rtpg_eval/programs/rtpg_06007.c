int test_func(void) {
    int v0 = 50;
    int v1 = 56;
    int v2 = 23;
    int v3 = 14;
    int v4 = 94;
    int v5 = 74;
    int i;
    v0 = v0 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
