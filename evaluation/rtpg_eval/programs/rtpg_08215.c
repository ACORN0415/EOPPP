int __arr_8215[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 64;
    int v2 = 87;
    int v3 = 69;
    int v4 = 11;
    int v5 = 49;
    int v6 = 26;
    int i;
    if (v1 > v3) { v1 = v3; }
    v5 = v5 * 4;
    for (i = 0; i < 10; i++) { __arr_8215[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
