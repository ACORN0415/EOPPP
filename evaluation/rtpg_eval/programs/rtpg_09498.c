int test_func(void) {
    int v0 = 62;
    int v1 = 12;
    int v2 = 63;
    int v3 = 72;
    int i;
    v0 = v0 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
