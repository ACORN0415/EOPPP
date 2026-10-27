int test_func(void) {
    int v0 = 95;
    int v1 = 19;
    int v2 = 46;
    int v3 = 40;
    int v4 = 92;
    int i;
    v3 = v3 + v1;
    v4 = 100;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
