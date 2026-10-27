int test_func(void) {
    int v0 = 20;
    int v1 = 87;
    int v2 = 16;
    int v3 = 36;
    int v4 = 96;
    int v5 = 52;
    int i;
    v5 = v5 + v0;
    v0 = v0 - v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
