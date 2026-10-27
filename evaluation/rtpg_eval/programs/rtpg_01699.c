int test_func(void) {
    int v0 = 1;
    int v1 = 49;
    int v2 = 19;
    int v3 = 40;
    int i;
    v0 = v0 - v1;
    if (v3 > v2) { v3 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
