int test_func(void) {
    int v0 = 12;
    int v1 = 34;
    int v2 = 43;
    int i;
    v1 = v1 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
