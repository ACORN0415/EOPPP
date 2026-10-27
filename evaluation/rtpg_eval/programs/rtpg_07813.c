int __arr_7813[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 54;
    int v2 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_7813[i] = v0 + i; }
    v0 = v0 - v1;
    v1 = v1 + v0;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
