int test_func(void) {
    int v0 = 77;
    int v1 = 30;
    int v2 = 88;
    int v3 = 74;
    int v4 = 84;
    int v5 = 92;
    int i;
    v5 = v5 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
