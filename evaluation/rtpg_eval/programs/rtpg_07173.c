int test_func(void) {
    int v0 = 71;
    int v1 = 71;
    int v2 = 22;
    int i;
    v2 = v2 * 3;
    v2 = v2 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
