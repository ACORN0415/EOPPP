int __arr_3245[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 85;
    int v2 = 25;
    int v3 = 3;
    int v4 = 46;
    int v5 = 29;
    int v6 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_3245[i] = v6 + i; }
    v4 = v4 & v1;
    int *__p = &v5;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
