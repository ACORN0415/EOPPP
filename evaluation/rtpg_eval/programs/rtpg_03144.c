int __arr_3144[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 23;
    int v2 = 84;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_3144[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
