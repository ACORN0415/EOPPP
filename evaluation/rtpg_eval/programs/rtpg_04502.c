int test_func(void) {
    int v0 = 94;
    int v1 = 9;
    int v2 = 37;
    int v3 = 95;
    int i;
    v2 = v2 - v1;
    v3 = v3 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
