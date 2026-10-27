int __arr_2759[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 77;
    int v2 = 30;
    int v3 = 0;
    int v4 = 69;
    int v5 = 80;
    int v6 = 83;
    int v7 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_2759[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
