int test_func(void) {
    int v0 = 43;
    int v1 = 39;
    int v2 = 62;
    int v3 = 34;
    int v4 = 42;
    int v5 = 60;
    int v6 = 100;
    int v7 = 70;
    int i;
    v3 = v3 - v0;
    v1 = 66;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
