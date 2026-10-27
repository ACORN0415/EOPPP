int test_func(void) {
    int v0 = 87;
    int v1 = 17;
    int v2 = 61;
    int v3 = 4;
    int i;
    v3 = v3 - v1;
    v1 = 6;
    v1 = v1 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
