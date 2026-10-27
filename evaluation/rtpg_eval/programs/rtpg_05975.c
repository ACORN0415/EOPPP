int test_func(void) {
    int v0 = 16;
    int v1 = 74;
    int v2 = 93;
    int v3 = 81;
    int v4 = 68;
    int v5 = 65;
    int v6 = 16;
    int i;
    v0 = 45;
    v4 = v4 - v1;
    v2 = v2 & v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
