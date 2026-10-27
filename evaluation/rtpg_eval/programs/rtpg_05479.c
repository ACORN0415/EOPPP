int __arr_5479[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 90;
    int v2 = 39;
    int v3 = 52;
    int v4 = 37;
    int v5 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_5479[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
