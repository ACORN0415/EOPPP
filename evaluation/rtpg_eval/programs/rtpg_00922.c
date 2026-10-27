int __arr_922[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 15;
    int v2 = 86;
    int v3 = 29;
    int v4 = 76;
    int v5 = 69;
    int v6 = 24;
    int v7 = 60;
    int i;
    if (v4 > v7) { v4 = v7; }
    for (i = 0; i < 10; i++) { __arr_922[i] = v7 + i; }
    v3 = v3 - v7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
