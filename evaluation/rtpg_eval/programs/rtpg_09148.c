int __arr_9148[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 22;
    int v2 = 80;
    int v3 = 59;
    int v4 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_9148[i] = v0 + i; }
    v0 = v0 * 10;
    v0 = v0 + v2;
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
