int __arr_3166[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 73;
    int v2 = 44;
    int v3 = 38;
    int v4 = 38;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_3166[i] = v3 + i; }
    v0 = v0 + v5;
    v3 = v3 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
