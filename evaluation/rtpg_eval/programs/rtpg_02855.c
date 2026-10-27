int __arr_2855[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 96;
    int v2 = 1;
    int v3 = 70;
    int v4 = 37;
    int v5 = 46;
    int v6 = 100;
    int v7 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_2855[i] = v7 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
