int test_func(void) {
    int v0 = 46;
    int v1 = 88;
    int v2 = 19;
    int i;
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
