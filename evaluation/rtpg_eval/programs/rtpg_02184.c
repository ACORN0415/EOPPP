int test_func(void) {
    int v0 = 43;
    int v1 = 45;
    int v2 = 33;
    int i;
    v1 = v1 + v2;
    v2 = v2 - v0;
    v2 = 92;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
