int __arr_3028[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 35;
    int v2 = 10;
    int v3 = 98;
    int v4 = 55;
    int v5 = 35;
    int v6 = 60;
    int v7 = 97;
    int i;
    v2 = 43;
    v4 = v4 + v4;
    for (i = 0; i < 10; i++) { __arr_3028[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
