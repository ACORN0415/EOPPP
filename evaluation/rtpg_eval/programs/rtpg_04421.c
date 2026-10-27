int test_func(void) {
    int v0 = 68;
    int v1 = 6;
    int v2 = 95;
    int v3 = 16;
    int v4 = 24;
    int i;
    v4 = v4 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
