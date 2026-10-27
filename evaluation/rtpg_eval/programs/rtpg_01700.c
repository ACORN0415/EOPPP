int test_func(void) {
    int v0 = 95;
    int v1 = 11;
    int v2 = 66;
    int v3 = 82;
    int i;
    v1 = 55;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
