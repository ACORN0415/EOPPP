int test_func(void) {
    int v0 = 17;
    int v1 = 39;
    int v2 = 66;
    int v3 = 66;
    int v4 = 50;
    int v5 = 61;
    int i;
    v0 = v0 - v3;
    v1 = v1 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
