int test_func(void) {
    int v0 = 20;
    int v1 = 11;
    int v2 = 74;
    int v3 = 49;
    int v4 = 32;
    int i;
    v0 = v0 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
