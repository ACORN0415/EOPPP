int test_func(void) {
    int v0 = 6;
    int v1 = 19;
    int v2 = 4;
    int v3 = 9;
    int v4 = 63;
    int i;
    v3 = v3 * 10;
    v1 = v1 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
