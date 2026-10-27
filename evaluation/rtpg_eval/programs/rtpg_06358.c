int __arr_6358[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 97;
    int v2 = 59;
    int v3 = 2;
    int v4 = 15;
    int v5 = 38;
    int v6 = 1;
    int i;
    v5 = v5 * 6;
    for (i = 0; i < 10; i++) { __arr_6358[i] = v5 + i; }
    v0 = v0 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
