int __arr_7088[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 39;
    int v2 = 62;
    int v3 = 39;
    int v4 = 72;
    int v5 = 51;
    int v6 = 24;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_7088[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
