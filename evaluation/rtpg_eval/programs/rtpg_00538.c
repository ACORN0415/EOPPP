int test_func(void) {
    int v0 = 42;
    int v1 = 81;
    int v2 = 85;
    int i;
    v2 = v2 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
