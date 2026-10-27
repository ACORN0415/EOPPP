int test_func(void) {
    int v0 = 15;
    int v1 = 0;
    int v2 = 19;
    int v3 = 56;
    int v4 = 17;
    int v5 = 18;
    int v6 = 84;
    int i;
    v1 = v1 - v6;
    v3 = v3 * 6;
    if (v2 > v1) { v2 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
