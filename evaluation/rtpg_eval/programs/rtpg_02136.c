int __arr_2136[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 28;
    int v2 = 5;
    int v3 = 96;
    int v4 = 69;
    int v5 = 64;
    int v6 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_2136[i] = v2 + i; }
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = v3 | v6;
    return v0;
}
int main(void) { return test_func(); }
