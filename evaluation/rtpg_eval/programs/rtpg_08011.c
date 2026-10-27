int __arr_8011[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 79;
    int v2 = 8;
    int v3 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_8011[i] = v0 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
