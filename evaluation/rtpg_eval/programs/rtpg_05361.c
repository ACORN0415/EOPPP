int test_func(void) {
    int v0 = 54;
    int v1 = 84;
    int v2 = 90;
    int v3 = 12;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v2;
    }
    v2 = 92;
    return v0;
}
int main(void) { return test_func(); }
