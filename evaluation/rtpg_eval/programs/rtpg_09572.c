int test_func(void) {
    int v0 = 17;
    int v1 = 83;
    int v2 = 66;
    int v3 = 61;
    int v4 = 33;
    int i;
    v3 = 43;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
