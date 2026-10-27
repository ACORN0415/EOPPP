int test_func(void) {
    int v0 = 89;
    int v1 = 71;
    int v2 = 85;
    int v3 = 89;
    int v4 = 92;
    int i;
    v4 = v4 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
