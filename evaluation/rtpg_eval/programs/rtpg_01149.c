int test_func(void) {
    int v0 = 82;
    int v1 = 20;
    int v2 = 74;
    int v3 = 84;
    int v4 = 55;
    int v5 = 29;
    int v6 = 65;
    int v7 = 79;
    int i;
    v4 = v4 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
