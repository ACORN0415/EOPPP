int test_func(void) {
    int v0 = 48;
    int v1 = 11;
    int v2 = 15;
    int v3 = 85;
    int v4 = 74;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
