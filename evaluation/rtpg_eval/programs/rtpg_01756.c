int test_func(void) {
    int v0 = 26;
    int v1 = 33;
    int v2 = 54;
    int v3 = 7;
    int v4 = 47;
    int v5 = 64;
    int i;
    v2 = v2 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
