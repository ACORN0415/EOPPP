int test_func(void) {
    int v0 = 89;
    int v1 = 4;
    int v2 = 27;
    int v3 = 51;
    int v4 = 77;
    int i;
    v4 = 95;
    v4 = v4 + v0;
    v1 = v1 % (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
