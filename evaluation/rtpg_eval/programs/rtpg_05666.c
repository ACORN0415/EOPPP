int __arr_5666[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 62;
    int v2 = 23;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    v1 = 64;
    for (i = 0; i < 10; i++) { __arr_5666[i] = v0 + i; }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
