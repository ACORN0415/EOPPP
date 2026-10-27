int test_func(void) {
    int v0 = 41;
    int v1 = 99;
    int v2 = 80;
    int i;
    v2 = v2 - v0;
    v0 = v0 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
