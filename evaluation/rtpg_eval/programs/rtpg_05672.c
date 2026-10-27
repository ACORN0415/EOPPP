int test_func(void) {
    int v0 = 87;
    int v1 = 27;
    int v2 = 14;
    int v3 = 15;
    int v4 = 75;
    int v5 = 28;
    int v6 = 19;
    int i;
    v0 = v0 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
