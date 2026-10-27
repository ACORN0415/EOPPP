int __arr_284[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 56;
    int v2 = 54;
    int v3 = 65;
    int v4 = 58;
    int v5 = 30;
    int v6 = 44;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_284[i] = v5 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
