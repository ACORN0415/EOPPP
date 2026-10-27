int test_func(void) {
    int v0 = 64;
    int v1 = 84;
    int v2 = 69;
    int v3 = 97;
    int i;
    v0 = v0 * 5;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
