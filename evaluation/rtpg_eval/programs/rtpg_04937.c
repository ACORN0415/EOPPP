int __arr_4937[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 6;
    int v2 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_4937[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
