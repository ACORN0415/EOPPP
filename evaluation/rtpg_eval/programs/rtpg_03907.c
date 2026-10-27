int test_func(void) {
    int v0 = 50;
    int v1 = 39;
    int v2 = 85;
    int v3 = 48;
    int i;
    v0 = v0 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
