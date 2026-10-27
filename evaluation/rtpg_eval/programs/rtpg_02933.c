int __arr_2933[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 66;
    int v2 = 91;
    int v3 = 58;
    int v4 = 32;
    int v5 = 50;
    int v6 = 53;
    int i;
    v6 = v6 * 7;
    for (i = 0; i < 10; i++) { __arr_2933[i] = v6 + i; }
    v1 = 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
