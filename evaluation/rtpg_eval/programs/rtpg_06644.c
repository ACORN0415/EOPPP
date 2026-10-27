int __arr_6644[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 59;
    int v2 = 17;
    int i;
    v2 = v2 * 10;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_6644[i] = v1 + i; }
    for (i = 0; i < 19; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
