int test_func(void) {
    int v0 = 13;
    int v1 = 97;
    int v2 = 42;
    int i;
    v0 = v0 * 2;
    if (v1 > v1) { v1 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
