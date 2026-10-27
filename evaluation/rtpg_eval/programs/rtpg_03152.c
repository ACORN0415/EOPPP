int test_func(void) {
    int v0 = 65;
    int v1 = 83;
    int v2 = 45;
    int v3 = 57;
    int i;
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
