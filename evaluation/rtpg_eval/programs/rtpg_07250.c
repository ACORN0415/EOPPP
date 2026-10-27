int test_func(void) {
    int v0 = 88;
    int v1 = 90;
    int v2 = 87;
    int i;
    v0 = v0 + v0;
    v2 = v2 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
