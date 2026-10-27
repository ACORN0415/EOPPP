int test_func(void) {
    int v0 = 42;
    int v1 = 3;
    int v2 = 80;
    int v3 = 76;
    int v4 = 99;
    int v5 = 57;
    int v6 = 83;
    int v7 = 88;
    int i;
    v3 = v3 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
