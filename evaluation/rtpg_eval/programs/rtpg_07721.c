int test_func(void) {
    int v0 = 3;
    int v1 = 49;
    int v2 = 8;
    int v3 = 68;
    int v4 = 68;
    int i;
    v3 = v3 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
