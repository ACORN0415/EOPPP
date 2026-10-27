int __arr_1277[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 8;
    int v2 = 33;
    int v3 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_1277[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
