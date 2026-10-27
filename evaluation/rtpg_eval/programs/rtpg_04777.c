int test_func(void) {
    int v0 = 85;
    int v1 = 28;
    int v2 = 49;
    int v3 = 55;
    int i;
    v2 = v2 + v2;
    v0 = 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
