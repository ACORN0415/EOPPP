int test_func(void) {
    int v0 = 40;
    int v1 = 82;
    int v2 = 12;
    int v3 = 90;
    int i;
    v3 = v3 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
