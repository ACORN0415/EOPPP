int test_func(void) {
    int v0 = 22;
    int v1 = 78;
    int v2 = 35;
    int v3 = 15;
    int v4 = 69;
    int v5 = 13;
    int v6 = 77;
    int i;
    v0 = v0 + v1;
    v4 = v4 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
