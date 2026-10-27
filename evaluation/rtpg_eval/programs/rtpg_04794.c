int __arr_4794[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 16;
    int v2 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_4794[i] = v1 + i; }
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
