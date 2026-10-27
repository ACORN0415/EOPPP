int test_func(void) {
    int v0 = 76;
    int v1 = 16;
    int v2 = 86;
    int i;
    v2 = v2 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
