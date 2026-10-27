int __arr_3706[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 48;
    int v2 = 1;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_3706[i] = v0 + i; }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
