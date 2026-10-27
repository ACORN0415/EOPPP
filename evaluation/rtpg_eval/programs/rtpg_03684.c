int test_func(void) {
    int v0 = 26;
    int v1 = 78;
    int v2 = 53;
    int v3 = 27;
    int v4 = 73;
    int v5 = 14;
    int v6 = 68;
    int i;
    v1 = v1 + v5;
    v5 = 47;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
