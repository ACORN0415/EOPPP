int test_func(void) {
    int v0 = 26;
    int v1 = 67;
    int v2 = 48;
    int v3 = 28;
    int v4 = 63;
    int i;
    v4 = v4 - v0;
    v3 = v3 + v2;
    v4 = 74;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
