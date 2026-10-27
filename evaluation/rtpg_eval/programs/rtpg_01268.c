int __arr_1268[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 17;
    int v2 = 37;
    int i;
    v0 = 77;
    for (i = 0; i < 10; i++) { __arr_1268[i] = v1 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
