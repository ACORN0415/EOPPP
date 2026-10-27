int __arr_8507[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 50;
    int v2 = 46;
    int v3 = 58;
    int v4 = 17;
    int v5 = 65;
    int v6 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_8507[i] = v0 + i; }
    v1 = v1 + v0;
    v4 = v4 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
