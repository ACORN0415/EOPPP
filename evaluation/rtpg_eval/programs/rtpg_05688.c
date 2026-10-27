int test_func(void) {
    int v0 = 75;
    int v1 = 8;
    int v2 = 10;
    int v3 = 34;
    int i;
    v0 = v0 - v2;
    v0 = v0 * 10;
    v0 = 59;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
