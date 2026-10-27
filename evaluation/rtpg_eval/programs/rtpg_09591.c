int __arr_9591[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 40;
    int v2 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_9591[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
