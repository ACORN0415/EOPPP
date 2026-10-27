int test_func(void) {
    int v0 = 1;
    int v1 = 62;
    int v2 = 21;
    int v3 = 100;
    int i;
    v1 = 13;
    v3 = v3 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
