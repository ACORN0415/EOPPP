int __arr_155[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 25;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_155[i] = v1 + i; }
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
