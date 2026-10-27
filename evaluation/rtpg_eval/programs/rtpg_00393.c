int test_func(void) {
    int v0 = 100;
    int v1 = 67;
    int v2 = 15;
    int v3 = 86;
    int v4 = 47;
    int i;
    if (v3 > v4) { v3 = v4; }
    v1 = v1 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
