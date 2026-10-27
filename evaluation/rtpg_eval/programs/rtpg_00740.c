int test_func(void) {
    int v0 = 43;
    int v1 = 50;
    int v2 = 13;
    int i;
    v2 = v2 - v0;
    v1 = v1 * 5;
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
