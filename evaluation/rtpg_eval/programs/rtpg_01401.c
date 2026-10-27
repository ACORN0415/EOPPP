int test_func(void) {
    int v0 = 15;
    int v1 = 77;
    int v2 = 61;
    int i;
    v1 = v1 - v0;
    v1 = v1 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
