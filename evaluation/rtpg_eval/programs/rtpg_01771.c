int __arr_1771[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 18;
    int v2 = 90;
    int v3 = 1;
    int v4 = 28;
    int v5 = 84;
    int v6 = 95;
    int v7 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_1771[i] = v5 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
