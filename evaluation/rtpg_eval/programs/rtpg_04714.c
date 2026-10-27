int test_func(void) {
    int v0 = 10;
    int v1 = 37;
    int v2 = 59;
    int v3 = 90;
    int i;
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
