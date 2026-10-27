int __arr_8452[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 74;
    int v2 = 76;
    int i;
    v2 = 79;
    for (i = 0; i < 10; i++) { __arr_8452[i] = v2 + i; }
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
