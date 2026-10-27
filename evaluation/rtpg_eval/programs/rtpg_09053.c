int __arr_9053[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 48;
    int v2 = 91;
    int v3 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_9053[i] = v3 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
