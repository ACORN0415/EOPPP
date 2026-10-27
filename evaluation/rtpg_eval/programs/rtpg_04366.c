int test_func(void) {
    int v0 = 45;
    int v1 = 94;
    int v2 = 18;
    int i;
    v0 = v0 * 2;
    v0 = 30;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
