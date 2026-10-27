int test_func(void) {
    int v0 = 2;
    int v1 = 77;
    int v2 = 64;
    int v3 = 71;
    int i;
    v2 = v2 * 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v3 = v3 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
