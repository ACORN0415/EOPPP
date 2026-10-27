int test_func(void) {
    int v0 = 52;
    int v1 = 35;
    int v2 = 40;
    int v3 = 27;
    int v4 = 73;
    int v5 = 74;
    int v6 = 44;
    int i;
    v0 = v0 - v4;
    v5 = v5 + v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
